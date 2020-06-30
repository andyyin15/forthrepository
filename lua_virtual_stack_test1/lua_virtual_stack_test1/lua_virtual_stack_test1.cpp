// lua_virtual_stack_test1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
extern "C"
{
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
}


int main()
{
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);
    luaL_loadfile(L, "test.lua");
    lua_pcall(L, 0, 0, 0);
    //luaL_dostring(L, "print('Hello Lua')");
    /*luaL_loadfile(L,"test.lua");
    lua_getglobal(L, "a");
    auto a = lua_tointeger(L,-1);
    cout << a << endl;*/
    
    /*lua_pcall(L, 0, 0, 0);
    lua_getglobal(L, "func");
    lua_pcall(L,0,0,0);*/
    /*lua_getglobal(L, "tab");
    lua_getfield(L, -1, "name");
    if (lua_isstring(L, -1))
    {
        auto str = lua_tostring(L, -1);
        cout << str << endl;
    }
    lua_pop(L, 1);
    lua_getfield(L, -1, "age");
    auto age = lua_tonumber(L, -1);
    cout << age << endl;
    auto n = lua_gettop(L);
    cout << n << endl;*/
    /*int new_age = 33;
    lua_getglobal(L, "tab");
    lua_pushinteger(L, new_age);
    lua_setfield(L, -2, "age");
    lua_pop(L, 1);
    lua_getglobal(L, "tab");
    lua_getfield(L, -1, "age");
    auto age = lua_tonumber(L, -1);
    cout << age << endl;*/
    lua_newtable(L);
    lua_pushstring(L, "andyerin");
    lua_setfield(L, -2, "str");
    //lua_gettable(L, 1);
    lua_pushstring(L, "str");
    lua_gettable(L, -2);
    auto s = lua_tostring(L, -1);
    cout <<s << endl;
    //lua_pop(L,1);
    /*lua_pushinteger(L, 10);
    lua_pushstring(L, "rosa");
    lua_settable(L, -3);*/
    
   
    system("pause");
    lua_close(L);
    return 0;
}

