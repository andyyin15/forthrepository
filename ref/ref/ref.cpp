// ref.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
int &changevalue()
{
    static int a_return = -29;
    return a_return;
}

int main()
{
    int &a_return = changevalue();
    a_return = 20;
    std ::cout << changevalue() <<std :: endl;
    system("pause");
}
