// lua_c_test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include <stdio.h>
extern "C"
{
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
}
#include <math.h>
#include <iostream>

int main() {
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);

    if (luaL_loadfile(L, "test.lua") || lua_pcall(L, 0, 0, 0)) {
        printf("error %s\n", lua_tostring(L, -1));
        return -1;
    }
    lua_getglobal(L, "add");
    lua_pushnumber(L, 10);
    lua_pushnumber(L, 20);
    if (lua_pcall(L, 2, 1, 0) != 0) {
        printf("error %s\n", lua_tostring(L, -1));
        return -1;
    }
    double z = lua_tonumber(L, -1);
    printf("z = %f \n", z);
    lua_pop(L, 1);
    system("pause");
    lua_close(L);
    return 0;
}