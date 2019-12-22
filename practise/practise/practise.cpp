// practise.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include <iostream>
#include <stdlib.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
    char * pArray[] = { "apple","pear","banana","orange","pineApple" };
    for (int i = 0; i < sizeof(pArray) / sizeof(*pArray); i++)
    {
        std::cout << pArray[i] << std::endl;
    }
    std::cout << sizeof(pArray) / sizeof(*pArray) << std::endl;
    system("pause");
    return 0;
}


