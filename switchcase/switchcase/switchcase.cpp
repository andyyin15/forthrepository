// switchcase.cpp : �������̨Ӧ�ó������ڵ㡣
//��switch-case���ʵ���������ļ���������

#include "stdafx.h"
#include<iostream>
using namespace std;



int main()
{
    int a, b;
    char c;
    cout << "����һ��ʽ�ӣ��Ұ�����㣬���磺a+b" << endl;
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

