// smalltranslatebig.cpp : �������̨Ӧ�ó������ڵ㡣
//���е�Сд���д

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
    cout << "������һ����ĸ" << endl;
    cin >> a;
    tran(a);
    system("pause");
    return 0;
}