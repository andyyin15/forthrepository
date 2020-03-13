// assigntest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;



int main()
{
    vector<std::string> str;
    //list< string> lis = {"qwe","asd"};
    //str.assign(lis.begin(), lis.end());
    auto i = str.begin();
    for (; i != str.end(); i++)
    {
        auto a=*i;
        std::cout  << a << endl;
    }
    system("pause");
    return 0;
}

