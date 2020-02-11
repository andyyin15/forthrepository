// devided2.cpp : 定义控制台应用程序的入口点。
//
//以下我们使用 % 来判断一个数是奇数还是偶数，原理是，将这个数除于 2 如果余数为 0 为偶数，否则Wie奇数。

#include "stdafx.h"
#include <iostream>
using namespace std;

void devided2()
{
    int x;
    cout << "请输入一个数：";
    cin >> x;
    if (x % 2 == 0 )
        cout << "偶数" << endl;
    else
        cout << "奇数" << endl;
    
}

int main()
{
    devided2();
    system("pause");
    return 0;
}

