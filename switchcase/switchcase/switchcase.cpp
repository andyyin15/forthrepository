// switchcase.cpp : 定义控制台应用程序的入口点。
//用switch-case语句实现两个数的简单四则运算

#include "stdafx.h"
#include<iostream>
using namespace std;



int main()
{
    int a, b;
    char c;
    cout << "输入一个式子，我帮你计算，例如：a+b" << endl;
    cin >> a >> c >> b;
    switch (c)
    {
    case '+':
            cout << a + b << endl;
            break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    default:
        cout << "no valid" << endl;
        break;

    }
    system("pause");
    return 0;
}

