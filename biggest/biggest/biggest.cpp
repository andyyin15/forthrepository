// biggest.cpp : �������̨Ӧ�ó������ڵ㡣
//ͨ����Ļ���������������֣����ҳ�������

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
    int x, y,z,p;
    int arr[3];
    cout << "�������������֣����Իس�������" << endl;
    
    cin >> x;
    cin >> y;
    cin >> z;
    if (x >= y)
    {
        p = x;
     }
    else
    {
      p = y;
    }
    if (p >= z)
    {
        cout << "��������" << p << endl;
    }
    else
    {
        cout << "��������" << z << endl;
    }

   
    system("pause");
    return 0;
}

