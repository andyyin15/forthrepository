// sum.cpp : �������̨Ӧ�ó������ڵ㡣
//���� 1+2+3+....+n �ĺ͡�

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
    int n,sum=0;
    cout << "������һ����" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    cout << "sum�ĺ��ǣ�" << sum << endl;
    system("pause");
    return 0;
}

