// sizeof.cpp : 定义控制台应用程序的入口点。
//
//使用 C++ sizeof 运算符来计算 int, float, double 和 char 变量占用的空间大小。

#include "stdafx.h"
#include <iostream>
using namespace std;



int main()
{
    cout << sizeof(int) << endl;
    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(char) << endl;

    system("pause");
    return 0;
}

