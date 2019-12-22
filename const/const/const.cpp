// const.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<iostream>

using namespace std;

int main(void)
{
    const int  a = 7;
    int  *p = (int*)&a;
    *p = 8;
    cout << a;
    system("pause");
    return 0;
}
