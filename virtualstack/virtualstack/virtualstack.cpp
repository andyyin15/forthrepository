// virtualstack.cpp : 定义控制台应用程序的入口点。
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
    lua_State* L = luaL_newstate();
    luaL_openlibs(L);
    //lua_pushinteger(L, 2);
    //lua_pushnil(L);
    //lua_pushnumber(L, 23);
    //lua_pushstring(L, "qwe");
    //auto len = lua_gettop(L);
    //cout << lua_tonumber(L, 1) << endl;
    ////cout << lua_tostring(L, -1) << endl;
    //cout << lua_tonumber(L, 3) << endl;
    //cout << lua_tostring(L, 4) << endl;
    ////cout << lua_tostring(L, -1) << endl;
    //cout << "**************"<< endl;
    //for (int i = 1; i <= len; i++)
    //{
    //    auto luatype = lua_type(L, i);
    //    switch (luatype)
    //    {
    //    case LUA_TNUMBER:
    //    {
    //        cout << i<<"="<<lua_tonumber(L,i)<< endl;
    //    }
    //    case LUA_TNIL:
    //    {
    //        cout << i << "=" << "null" << endl;
    //    }
    //    case LUA_TBOOLEAN:
    //    {
    //        cout << i << "=" << lua_toboolean(L,i) << endl;
    //    }
    //    case LUA_TSTRING:
    //    {
    //        printf("%s",lua_tostring(L,i));
    //    }

    //    default:
    //        break;
    //    }
    //}
    //cout << "\n";
    //cout << "############################################"<< endl;
    auto i = luaL_loadfile(L,"sum.lua");
    lua_pcall(L, 0, 0, 0);
    //lua_getglobal(L,"str");
    //string str = lua_tostring(L, -1);
    //cout << str << endl;
    //lua_pcall(L,0,0,0);
    lua_getglobal(L, "func");
    lua_pushnumber(L, 10.000000);
    lua_pushnumber(L, 20.000000);
    lua_pcall(L, 2, 1, 0);
    double z = lua_tonumber(L, -1);
    printf("z = %f \n", z);
    //lua_pop(L, 1);
    cout << "^^^^^^^^^^^^^^^" << endl;
    luaL_dostring(L, "print('Hello Lua')");
    system("pause");
    lua_close(L);
    return 0;
}

