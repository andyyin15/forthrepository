// lua_userdata_test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <lua.hpp>
#include <math.h>
#include <string>
#include <assert.h>
#include <sstream>
#include <string.h>

using namespace std;

class Person {
public:
    std::string    *     mName;
    std::string *     mId;
    std::string *     mPhone;
    short    mAge;
    short     mGender;
};



static Person * checkPerson(lua_State *L) {
    void *ud = luaL_checkudata(L, 1, "LuaBook.Person");
    luaL_argcheck(L, ud != NULL, 1, "`Person` expected");
    return (Person*)ud;
}

static int newPerson(lua_State *L) {
    size_t nbytes = sizeof(Person);
    Person *p = (Person*)lua_newuserdata(L, nbytes);

    luaL_getmetatable(L, "LuaBook.Person");
    lua_setmetatable(L, -2);

    p->mName = new std::string("wangxiaoyun");
    p->mId = new std::string("f232-fadf-1231-dfafd");
    p->mPhone = new std::string("0472-6165500");

    p->mAge = 28;
    p->mGender = 1;

    return 1;
}

static int Person_setName(lua_State *L) {
    Person *p = checkPerson(L);
    size_t len = 0;
    const char * newName = luaL_checklstring(L, 2, &len);
    luaL_argcheck(L, len <= 256, 2, "name is too long");
    *(p->mName) = newName;
    return 0;
}

static int deletePerson(lua_State *L) {
    Person *p = checkPerson(L);

    delete p->mName;
    delete p->mId;
    delete p->mPhone;

    p->mName = NULL;
    p->mId = NULL;
    p->mPhone = NULL;
    return 0;
}

static int tostringPerson(lua_State *L) {
    Person *p = checkPerson(L);
    /*
    std::cout << "name:" << *p->mName << endl
    <<"id:" << *p->mId << endl
    <<"mPhone:" << *p->mPhone <<endl
    <<"mAge:" << p->mAge <<endl
    <<"mGender:" << p->mGender
    << endl;
    */
    stringstream ss;
    ss << "name:" << *p->mName << endl
        << "id:" << *p->mId << endl
        << "mPhone:" << *p->mPhone << endl
        << "mAge:" << p->mAge << endl
        << "mGender:" << p->mGender
        << endl;

    lua_pushstring(L, ss.str().c_str());

    return 1;
}

static int l_sin(lua_State *L) {
    double d = lua_tonumber(L, 1);
    lua_pushnumber(L, sin(d));
    return 1;
}

static struct luaL_Reg mylib[] = {
    { "sin", l_sin },
    { NULL, NULL }
};

static struct luaL_Reg person_lib_f[] = {
    { "new", newPerson },
    { NULL, NULL }
};

static struct luaL_Reg person_lib_m[] = {
    { "delete", deletePerson },
    { "__tostring", tostringPerson },
    { "setName", Person_setName },
    { NULL, NULL }
};

void luaopen_Person(lua_State *L) {
    luaL_newmetatable(L, "LuaBook.Person");

    lua_pushstring(L, "__index");
    lua_pushvalue(L, -2); //pushes the metatable
    lua_settable(L, -3);    //metatable.__index = metatable
    luaL_setfuncs(L, person_lib_m, 0);

    luaL_newlib(L, person_lib_f);
    lua_setglobal(L, "Person");
}

void luaopen_mylib(lua_State *L) {
    luaL_newlib(L, mylib);
    lua_setglobal(L, "mylib");
}


void run_lua_file(lua_State *L, char * filename) {
    assert(filename != NULL);
    if (luaL_loadfile(L, filename) || lua_pcall(L, 0, 0, 0)) {
        std::cout << ("cannot run lua file: %s", lua_tostring(L, -1));
    }
}


void test_mylib() {
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);
    luaopen_mylib(L);
    run_lua_file(L, "test.lua");
}

void test_Person() {
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);
    luaopen_Person(L);
    run_lua_file(L, "test.lua");
}

int main() {
    //test_mylib();
    test_Person();
    system("pause");
    return 0;
}
