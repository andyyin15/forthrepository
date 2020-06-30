// luastack_test.cpp : �������̨Ӧ�ó������ڵ㡣
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
        //ֱ��ִ��Lua����
        luaL_dostring(L, "print('Hello Lua')");
        //ִ��Lua�ļ�����
        luaL_dofile(L, "Test.lua");

        //��ȡ����
        //���ҵ���������ѹ��ջ
        lua_getglobal(L, "str");
        string str = lua_tostring(L, -1);
        cout << str << endl;

        //��ȡtable
        lua_getglobal(L, "tab");
        //�� index[k] ��ֵѹջ,��-1��λ�û�ȡname��ֵ��������ѹջ
        lua_getfield(L, -1, "name");
        str = lua_tostring(L, -1);

        //�޸�table
        // ����Ҫ���õ�ֵ���õ�ջ��  
        lua_pushstring(L, "����һ����˧����");
        // �����ֵ���õ�table�У���ʱtbl��ջ��λ��Ϊ2��  
        lua_setfield(L, 2, "name");

        //����һ����table
        // ����һ���µ�table����ѹ��ջ  
        lua_newtable(L);
        // ��table������ֵ  
        lua_pushstring(L, "Give me a girl friend !"); //��ֵѹ��ջ 
                                                      //��ֵ���õ�table�У�����Give me a girl friend ��ջ 
        lua_setfield(L, -2, "str");

        //��ȡ����
        lua_getglobal(L, "Add");
        //��һ������ѹջ
        lua_pushinteger(L, 6);
        //�ڶ�������ѹջ
        lua_pushinteger(L, 5);

        //����Add������ͬʱ���Add�����������������г�ջ����ѹ�뷵��ֵ
        lua_call(L, 2, 1);//2������������1������ֵ����
        int result = lua_tointeger(L, -1);//��ջ��ȡ����ֵ��Ҳ���ǻ�ȡջ��
        lua_pop(L, 4);//��ջ
    }
    //�ر�State
    lua_close(L);
}

