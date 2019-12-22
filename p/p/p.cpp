// p.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include <stdlib.h>

using namespace std;

char a;
char *pa;


int main()
{
    a = 10;
    pa = &a;
    *pa = 20;
    std::cout << "&pa = " << &pa<< std::endl;
    std::cout << "&pa = " << &a << std::endl;
    std::cout << "&pa = " << pa << std::endl;
    std::cout << "&pa = " << *pa << std::endl;
    system("pause");
    return 0;
}

