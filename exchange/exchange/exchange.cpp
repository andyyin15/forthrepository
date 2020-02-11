// exchange.cpp : 定义控制台应用程序的入口点。
//
//以下我们使用两种方法来交换两个变量：使用临时变量与不使用临时变量。

#include "stdafx.h"
#include <iostream>
using namespace std;

void exchange()
{
    int x, y, z;
    cout << "请输入两个数";
    cin >> x;
    cin >> y;
    cout << "交换前两个数是：" << "x=" << x <<"\n" << "y=" << y << endl;
    z = x;
    x = y;
    y = z;
    cout<<"交换后两个数是："<<"x=" << x << "\n" << "y=" << y << endl;
}

int main()
{
    exchange();
    system("pause");
    return 0;
}



