// run_year.cpp : 定义控制台应用程序的入口点。
//用户输入年份，判断该年份是否为闰年

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
    int year;
    cout << "请输入年份：" << endl;
    cin >> year;
    if (year % 4 == 0 || year % 400 == 0)
    {
        cout << "闰年" << endl;
    }
    else
    {
        cout << "平年" << endl;
    }
    system("pause");
    return 0;
}

