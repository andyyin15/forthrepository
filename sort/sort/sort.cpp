// sort.cpp : 定义控制台应用程序的入口点。
//读取用户输入的数，然后对它们从大到小排序后输出。(知识点：排序问题

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

void inputvector()
{
    vector<int> v1;
    v1.push_back(23);
    v1.push_back(3);
    v1.push_back(44);
    v1.push_back(234);
    v1.push_back(8);
    cout << "排序前" << endl;
    for (auto i : v1)
    {
        cout << i << " ";
    }
    sort(v1.begin(), v1.end());
    cout << endl << "排序后： ";
    for (auto i : v1)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    inputvector();
    system("pause");
    return 0;
}

