// insertsort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <array>
using namespace std;


template<class T>
void insertsort(T array,int len)
{
    int temp;
    for (int i = 1; i < len; i++)
    {
        temp = array[i];
        int j = i;
        while (j > 0 && temp < array[j - 1])
        {
            array[j - 1] = array[j];
            j--;
        }
        array[j] = temp;

    }
}

int main()
{

    system("pause");
    return 0;
}

