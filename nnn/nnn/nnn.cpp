// nnn.cpp : �������̨Ӧ�ó������ڵ㡣
//һ���������Ľ׳ˣ�Ӣ�factorial��������С�ڼ����ڸ������������Ļ�������0�Ľ׳�Ϊ1����Ȼ��n�Ľ׳�д��n!��

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
    unsigned long long  x = 1;
    unsigned int n;
        cout << "����һ����������������Ľ׳�" << endl;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            x = x*i;
        }
        cout << x << endl;
    system("pause");
    return 0;
}

