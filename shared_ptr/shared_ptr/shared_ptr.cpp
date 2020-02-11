// shared_ptr.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <memory>
using namespace std;
//vector<int> *p;
int ins(vector<int> *p)
{
    int x;
    cout << "输入一个值" << endl;
    cin >> x;
    (*p).push_back(x);
    cout << (*p)[0] << endl;
    return 0;
}

int main()
{
    vector<int> x;
    vector<int>*p = new vector<int>;
    //(*p).push_back(10);
    ins(p);
    delete p;
    shared_ptr<vector<int>> pp = make_shared<vector<int>>();
    system("pause");
    return 0;
}

