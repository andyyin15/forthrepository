// map_list.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <map>
#include <iostream>
using namespace std;

typedef struct MyStruct
{
    int a;
    MyStruct* headpointer;
}mystruct,*linkstruck;

void create_list(mystruct*head)
{
    auto p = new mystruct;
    p->a = 0;
    p->headpointer = nullptr;
    mystruct* firstnode = p;
    map<mystruct*, int>map_test;
    for (int i = 1; i < 11; i++)
    {
        mystruct* my_struct = new mystruct;
        my_struct->a = i;
        firstnode->headpointer = my_struct;
        map_test[my_struct] = 1;
        firstnode = my_struct;
    }
    for (auto it = map_test.begin(); it != map_test.end(); it++)
    {
        cout << it->first << ":" << it->second << endl;
    }
}


int main()
{
    mystruct* pp=nullptr;

    create_list(pp);
   
    system("pause");
    return 0;
}

