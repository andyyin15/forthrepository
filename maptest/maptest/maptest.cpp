// maptest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <map>
#include <iostream>
using namespace std;


int main()
{
    map<int, string>maptest;
    maptest[1] = "qwe";
    maptest[2] = "asd";
    auto iter = maptest.find(1);
    if (iter != maptest.end())
    {
        cout << "yes"<< endl;
        cout << maptest.size() << endl;
        cout << maptest.count(1) << endl;
    }
    system("pause");
    return 0;
}

