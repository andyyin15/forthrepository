// devided2.cpp : �������̨Ӧ�ó������ڵ㡣
//
//��������ʹ�� % ���ж�һ��������������ż����ԭ���ǣ������������ 2 �������Ϊ 0 Ϊż��������Wie������

#include "stdafx.h"
#include <iostream>
using namespace std;

void devided2()
{
    int x;
    cout << "������һ������";
    cin >> x;
    if (x % 2 == 0 )
        cout << "ż��" << endl;
    else
        cout << "����" << endl;
    
}

int main()
{
    devided2();
    system("pause");
    return 0;
}

