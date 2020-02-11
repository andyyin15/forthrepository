// nnn.cpp : 定义控制台应用程序的入口点。
//一个正整数的阶乘（英语：factorial）是所有小于及等于该数的正整数的积，并且0的阶乘为1。自然数n的阶乘写作n!。

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
    unsigned long long  x = 1;
    unsigned int n;
        cout << "输入一个数，帮你算出它的阶乘" << endl;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            x = x*i;
        }
        cout << x << endl;
    system("pause");
    return 0;
}

