// run_year.cpp : �������̨Ӧ�ó������ڵ㡣
//�û�������ݣ��жϸ�����Ƿ�Ϊ����

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
    int year;
    cout << "��������ݣ�" << endl;
    cin >> year;
    if (year % 4 == 0 || year % 400 == 0)
    {
        cout << "����" << endl;
    }
    else
    {
        cout << "ƽ��" << endl;
    }
    system("pause");
    return 0;
}

