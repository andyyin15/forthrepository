// relist.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <map>
using namespace std;



int main()
{
    map<int, int>maptest;
    maptest[1] = 1;
    maptest[2] = 2;
    maptest[3] = 3;
    maptest[4] = 4;
    maptest[5] = 5;
    for (auto i = maptest.rbegin(); i != maptest.rend(); i++)
    {
        cout << maptest[i->first] << endl;
    }
    
    cout << (maptest.rbegin()->second) << endl;
    system("pause");
    return 0;
}

