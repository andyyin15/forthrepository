#include "stdafx.h"
#include <stdio.h>

extern "C" {
#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
}

/* ָ��Lua��������ָ�� */
//lua_State* L;
static int average(lua_State *L)
{
    /* �õ��������� */
    int n = lua_gettop(L);
    double sum = 0;
    int i;

    /* ѭ�������֮�� */
    for (i = 1; i <= n; i++)
    {
        /* ��� */
        sum += lua_tonumber(L, i);
    }
    /* ѹ��ƽ��ֵ */
    lua_pushnumber(L, sum / n);
    /* ѹ��� */
    lua_pushnumber(L, sum);
    /* ���ط���ֵ�ĸ��� */
    return 2;
}

int main(int argc, char *argv[])
{
   
    /* ��ʼ��Lua */
   // L = lua_open();
    lua_State *L = luaL_newstate();

    /* ����Lua������ */
    luaL_openlibs(L);
    /* ע�ắ�� */
    lua_register(L, "average", average);
    /* ���нű� */
    luaL_dofile(L, "avg.lua");
    /* ���Lua */
    lua_close(L);

    /* ��ͣ */
    printf("Press enter to exit��");
    getchar();
    return 0;
}

