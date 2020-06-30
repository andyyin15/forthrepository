// luastack_test.cpp : 定义控制台应用程序的入口点。
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




void main()
{
    lua_State *L = luaL_newstate();
    {
        //直接执行Lua代码
        luaL_dostring(L, "print('Hello Lua')");
        //执行Lua文件代码
        luaL_dofile(L, "Test.lua");

        //读取变量
        //查找到变量，并压入栈
        lua_getglobal(L, "str");
        string str = lua_tostring(L, -1);
        cout << str << endl;

        //读取table
        lua_getglobal(L, "tab");
        //把 index[k] 的值压栈,从-1的位置获取name的值，并将它压栈
        lua_getfield(L, -1, "name");
        str = lua_tostring(L, -1);

        //修改table
        // 将需要设置的值设置到栈中  
        lua_pushstring(L, "我是一个大帅锅～");
        // 将这个值设置到table中（此时tbl在栈的位置为2）  
        lua_setfield(L, 2, "name");

        //创建一个新table
        // 创建一个新的table，并压入栈  
        lua_newtable(L);
        // 往table中设置值  
        lua_pushstring(L, "Give me a girl friend !"); //将值压入栈 
                                                      //将值设置到table中，并将Give me a girl friend 出栈 
        lua_setfield(L, -2, "str");

        //读取函数
        lua_getglobal(L, "Add");
        //第一个参数压栈
        lua_pushinteger(L, 6);
        //第二个参数压栈
        lua_pushinteger(L, 5);

        //调用Add函数，同时会对Add函数及两个参数进行出栈，并压入返回值
        lua_call(L, 2, 1);//2：参数个数，1：返回值个数
        int result = lua_tointeger(L, -1);//从栈中取返回值，也就是获取栈顶
        lua_pop(L, 4);//清栈
    }
    //关闭State
    lua_close(L);
}

