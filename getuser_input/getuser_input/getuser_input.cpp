// getuser_input.cpp : 定义控制台应用程序的入口点。
//

//使用 C++ 获取用户的输入，并输出到屏幕：

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
    char str[50];
        cout << "请输入：";
        cin >> str;
        cout << "您输入的是：" << str << endl;
        system("pause");
    return 0;
}

