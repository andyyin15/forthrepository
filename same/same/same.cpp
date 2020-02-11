// same.cpp : 定义控制台应用程序的入口点。
//写一个函数，判断一个数组是否“回文”： 即正着、倒着是一样的。

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
            cout << "不是" << endl;
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

