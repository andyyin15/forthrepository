// reverse_chain.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <list>
using namespace std;

typedef struct MyStruct
{
    int a;
    MyStruct* next;
}mystruct ,*linkstruct;

mystruct printreversechain(mystruct* x)
{
    if (x!=nullptr)
    {
        printreversechain((*x).next);
        cout <<(*x).a  << endl;
    }
}

int main()
{
    return 0;
}

