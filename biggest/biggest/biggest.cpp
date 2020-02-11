// biggest.cpp : 定义控制台应用程序的入口点。
//通过屏幕我们输入三个数字，并找出最大的数

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
    int x, y,z,p;
    int arr[3];
    cout << "请输入三个数字，并以回车键隔开" << endl;
    
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
        cout << "最大的数是" << p << endl;
    }
    else
    {
        cout << "最大的数是" << z << endl;
    }

   
    system("pause");
    return 0;
}

