// devided.cpp : 定义控制台应用程序的入口点。
//
//使用 C++ 获取用户的输入两个数字，并将两个数字相除，然后将商和余数输出到屏幕

#include "stdafx.h"
#include <iostream>
using namespace std;

void devided()
{
    int x, y;
    cout << "请输入两个数：";
    cin >> x;
    cin >> y;
    cout << "两个数的商是："<< x / y << endl;
    cout << "两个数的相除的余数是：" << x%y << endl;
}


int main()
{
    devided();
    system("pause");
    return 0;
}

