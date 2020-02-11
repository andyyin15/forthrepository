// index.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<iostream>

int main() {
    int b = 0;
    int &a = b;
    a = 4;
    std::cout << a << '\t' << std::endl;
    b = 555554;
    std::cout << a << std::endl;
    system("pause");
    return 0;
    
}

