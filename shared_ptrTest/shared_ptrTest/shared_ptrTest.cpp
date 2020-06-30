// shared_ptrTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <string>
using namespace std;


shared_ptr<vector<int>> func()
{
    auto vec = make_shared<vector<int>>();
    
    return vec;
}

void func1(shared_ptr<vector<int>> x)
{
    x->push_back(123);
   
}

void func2(shared_ptr<vector<int>> y)
{
    cout << y->back() << endl;;
}
int main()
{
    auto aa = func();
    func1(aa);
    func2(aa);
    system("pause");
    return 0;
}

