// bigger.cpp : 定义控制台应用程序的入口点。
//用户输入两个数，求这两个数的最大公约数。

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
    int x, y,z;
    cout << "请输入两个数" << endl;
    cin >> x >> y ;
    if (x%y == 0)
    {
        cout << "最大公约数:"<<y<<endl;

    }
    else if (x%y > 0)
    {
        z = x%y;
        while (!(z == 0))
        {
            x = y;
            y = z;
            z = x%y;
        }
    }
    cout << "最大公约数是" << y << endl;
    system("pause");
    return 0;
}

