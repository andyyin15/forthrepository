// listdeletemap.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <map>
#include <random>
using namespace std;


int main()
{
    default_random_engine engine;
    uniform_int_distribution<int> dist(0, 10);
    for (int i = 0; i < 50; i++)
    {
        cout <<dist(engine) << endl;
    }
    int*p;
    p = (int*)malloc(sizeof(int));
    cout <<p << endl;
    system("pause");
    return 0;
}

