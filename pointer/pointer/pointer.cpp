// pointer.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
    int *p;
    int num = 7;
    p = &num;
    cout << "ָ��p�ĵ�ַ��" << p << endl;
    cout << "ָ��p��ŵ�������" << *p << endl;
    system("pause");
    return 0;
}

