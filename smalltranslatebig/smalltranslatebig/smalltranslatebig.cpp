// smalltranslatebig.cpp : 定义控制台应用程序的入口点。
//所有的小写变大写

#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;

char tran(char x)
{
    toupper(x);
    //cout << toupper(x) << endl;
    printf("%c\n", toupper(x));
    return x;
}

int main()
{
    char a;
    cout << "请输入一个字母" << endl;
    cin >> a;
    tran(a);
    system("pause");
    return 0;
}