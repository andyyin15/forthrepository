// backtext.cpp : �������̨Ӧ�ó������ڵ㡣
//дһ���������ж�һ�������Ƿ񡰻��ġ��� �����š�������һ���ġ�

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;



int main()
{
    int arr[5] = {1,2,3,2,1};
    int len = sizeof(arr) / sizeof(arr[0]);
    //int lenlen = (int)(len / 2);
    int len2 = floor(len / 2);
    for (int i = 0; len2; i++)
    {
        if (arr[i] != arr[len - i-1])
        {
            cout << "����" << endl;
            break;
        }
        cout << "yes" << endl;
        system("pause");
    }
    system("pause");
    return 0;
}

