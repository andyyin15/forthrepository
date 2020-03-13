// front_inserter.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;


int main()
{
    list<int>lis = {2,5,7,9,2,6,8,12};
    list<int>lis1 = {11,55,33,77,99,23};
    list<int>lis2, lis3;
    copy(lis.begin(), lis.end(), front_inserter(lis2));
    for (auto i = lis2.begin(); i != lis2.end(); i++)
    {
        cout << *i<< endl;
    }
    copy(lis1.rbegin(), lis1.rend(), front_inserter(lis3));
    for (auto ii = lis3.begin(); ii != lis3.end(); ii++)
    {
        cout << *ii << endl;
    }
    system("pause");
    return 0;
}

