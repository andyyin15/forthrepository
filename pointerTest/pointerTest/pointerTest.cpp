// pointerTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    int i = 30;

    std::cout << "&i = " << &i << std::endl;
    std::cout << "i =  " << i << std::endl;

    int *pi;
  
    pi = &i;
    std::cout << "*pi = " << *pi << std::endl;

    system("pause");
    return 0;
}


