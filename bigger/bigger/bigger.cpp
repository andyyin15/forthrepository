// bigger.cpp : �������̨Ӧ�ó������ڵ㡣
//�û����������������������������Լ����

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
    int x, y,z;
    cout << "������������" << endl;
    cin >> x >> y ;
    if (x%y == 0)
    {
        cout << "���Լ��:"<<y<<endl;

    }
    else if (x%y > 0)
    {
        z = x%y;
        while (!(z == 0))
        {
            x = y;
            y = z;
            z = x%y;
        }
    }
    cout << "���Լ����" << y << endl;
    system("pause");
    return 0;
}

