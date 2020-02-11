// add.cpp : 定义控制台应用程序的入口点。
//

//使用 C++ 获取用户的输入两个数字，并将两个数字相加，然后输出到屏幕：

#include "stdafx.h"
#include <iostream>
using namespace std;

void addNum()
{
    int x, y;
    cout << "请输入两个数字：";
    cin >> x;
    cin >> y;
    cout << "两个数的和为：" << x + y << endl;
}


int main()
{
    addNum();
    system("pause");
    return 0;
}

