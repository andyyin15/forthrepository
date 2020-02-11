// pointerfunc.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <functional>
using namespace std;

int func(int x,int y)
{
    cout << x + y << endl;
    return 0;
}


int p(int x, int y,int func)
{
    //cout << x + y << endl;

    return 0;
}



int main()
{
    
    //p = func;
    auto pf = &p;
    (*pf)(2, 3);
    int(*pf1)(int, int);
    //int *pf1;
    pf1 = p;
    pf1(2, 3);

    std::function<int(int, int)> pf2(p);

    system("pause");
    return 0;
}

