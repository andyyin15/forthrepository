// deleterepeat.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
using namespace std;




int main()
{
    int arr[5] = {2,4,3,5,2,};
    sort(arr,arr+5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i]<< endl;
    }
    int index = 0;
    for (int j = 0; j < 5; j++)
    {
        if (arr[index] == arr[j + 1])
        {
            cout << index << endl;
        }
        if (arr[index] != arr[j + 1])
        {
            arr[++index] = arr[j];
        }

        
    }
    system("pause");
    return 0;
}

