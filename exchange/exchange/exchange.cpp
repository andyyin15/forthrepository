// exchange.cpp : �������̨Ӧ�ó������ڵ㡣
//
//��������ʹ�����ַ�������������������ʹ����ʱ�����벻ʹ����ʱ������

#include "stdafx.h"
#include <iostream>
using namespace std;

void exchange()
{
    int x, y, z;
    cout << "������������";
    cin >> x;
    cin >> y;
    cout << "����ǰ�������ǣ�" << "x=" << x <<"\n" << "y=" << y << endl;
    z = x;
    x = y;
    y = z;
    cout<<"�������������ǣ�"<<"x=" << x << "\n" << "y=" << y << endl;
}

int main()
{
    exchange();
    system("pause");
    return 0;
}



