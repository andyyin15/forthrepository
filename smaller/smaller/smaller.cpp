// smaller.cpp : �������̨Ӧ�ó������ڵ㡣
//�û���������������������������С��������

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
    char test = getchar();
    cout << test << endl;
    int x, y;
    long long z;
    cout << "������������" << endl;
    cin >> x >> y;
    for (int i = x; i <= (x*y); i++)
    {
        if ((i%x == 0 && i%y == 0))
        {
            cout << "��С��������" << i<<endl;
            break;
        }
    }
    system("pause");
    return 0;
}

