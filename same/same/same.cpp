// same.cpp : �������̨Ӧ�ó������ڵ㡣
//дһ���������ж�һ�������Ƿ񡰻��ġ��� �����š�������һ���ġ�

#include "stdafx.h"
#include <iostream>
using namespace std;
int len;
auto arrlen(int *arr)
{
    auto x = (sizeof(arr)) / (sizeof(arr[0]));
    for (int i = 0; i < x/2; i++)
    {
        if (arr[i] != arr[x - 1 - i])
        {
            cout << "����" << endl;
            break;
        }
        
    }

    cout << "yes" << endl;
}


int main()
{
    int arry[6] = {1,2,5,3,2,1};
    arrlen( arry);
    system("pause");
    return 0;
}

