// pointer.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
    int *p;
    int num = 7;
    p = &num;
    cout << "指针p的地址是" << p << endl;
    cout << "指针p存放的内容是" << *p << endl;
    system("pause");
    return 0;
}

