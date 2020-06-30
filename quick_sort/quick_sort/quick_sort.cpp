// quick_sort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void quick_sort(int* arr, int firstbegin, int lastend)
{
    int temp = arr[firstbegin];
    int i = arr[firstbegin];
    int j = arr[lastend];
    if (firstbegin < lastend)
    {
        while (i < j)
        {
            while (i<j && j>temp)
            {
                j--;
            }
            arr[i] = arr[j];
            while (i < j && i <= temp)
            {
                i++;
            }
            arr[j] = arr[i];


        }
        arr[i] = temp;
        quick_sort(arr,firstbegin,i-1);
        quick_sort(arr,i+1, lastend);
    
    }
    else
        return;
}

int main()
{
    int num[] = {23,56,34,66,2,8,45,7,12,4,5,34};
    int  n = 12;
    quick_sort(num,0,n-1);
    for (int i = 0; i < 12; i++)
    {
        cout << num[i]<< endl;
    }
    system("pause");
    return 0;
}

