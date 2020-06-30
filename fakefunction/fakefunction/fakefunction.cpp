// fakefunction.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct MyStruct
{
    int x;
    MyStruct(int a) { x = a; };
    bool operator < (const MyStruct& a) const
    {
        return x < a.x;
    }
};

struct MyStruct2
{
    //MyStruct2();
    bool operator()  (MyStruct&a, MyStruct&b)
    {
        return a.x > b.x;
    }
};

int main()
{
    priority_queue<int> que;
    que.push(2);
    que.push(21);
    que.push(12);
    while (!que.empty())
    {
        cout << que.top()<<"\n"<< endl;
        que.pop();
    }
    cout <<"*************************" << endl;
    priority_queue<MyStruct, vector<MyStruct>, MyStruct2> que2;
    MyStruct a(1);
    MyStruct b(143);
    MyStruct c(12);
    que2.push(a);
    que2.push(b);
    que2.push(c);
    while (!que2.empty())
    {
        cout << que2.top().x << "\n" << endl;
        que2.pop();
    }
    system("pause");
    return 0;
}

