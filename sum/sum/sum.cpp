// sum.cpp : 定义控制台应用程序的入口点。
//计算 1+2+3+....+n 的和。

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
    int n,sum=0;
    cout << "请输入一个数" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "sum的和是：" << sum << endl;
    system("pause");
    return 0;
}

