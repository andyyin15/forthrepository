// stlTest1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int>vec = {2,45,11,4,66,34};
    auto v = vec.back();
    cout <<v << endl;
    v = 99;
    cout << v << endl;
    auto vv = vec.back();
    cout << vv << endl;
    cout << "****************************************"<< endl;
    auto &va = vec.back();
    va = 88;
    auto vvv = vec.back();
    cout << vvv << endl;
    system("pause");
    return 0;
}

