// devided.cpp : �������̨Ӧ�ó������ڵ㡣
//
//ʹ�� C++ ��ȡ�û��������������֣������������������Ȼ���̺������������Ļ

#include "stdafx.h"
#include <iostream>
using namespace std;

void devided()
{
    int x, y;
    cout << "��������������";
    cin >> x;
    cin >> y;
    cout << "�����������ǣ�"<< x / y << endl;
    cout << "������������������ǣ�" << x%y << endl;
}


int main()
{
    devided();
    system("pause");
    return 0;
}

