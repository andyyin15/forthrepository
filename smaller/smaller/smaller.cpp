// smaller.cpp : 定义控制台应用程序的入口点。
//用户输入两个数，其这两个数的最小公倍数。

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
    char test = getchar();
    cout << test << endl;
    int x, y;
    long long z;
    cout << "请输入两个数" << endl;
    cin >> x >> y;
    for (int i = x; i <= (x*y); i++)
    {
        if ((i%x == 0 && i%y == 0))
        {
            cout << "最小公倍数：" << i<<endl;
            break;
        }
    }
    system("pause");
    return 0;
}

