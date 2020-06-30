// push_front.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <string>
#include <deque>
using namespace std;


int main()
{
    deque<int>de1;
    deque<int>de2;
    list<int> lis;
    lis.push_front(1);
    lis.push_front(2);
    lis.push_front(3);
    lis.push_front(4);
    lis.emplace(lis.begin(), 999);
    lis.emplace(++lis.begin(), 222);
    lis.emplace_back(888);
    lis.emplace_front(333);
    for (auto i = lis.begin(); i != lis.end(); i++)
    {
        cout <<*i << endl;
    }
    cout <<"****************************************" << endl;
    list<int>lis1;
    lis1.insert(lis1.begin(),1);
    lis1.insert(lis1.begin(), 2);
    lis1.insert(lis1.begin(), 3);
    lis1.insert(lis1.begin(), 4);
    lis1.insert(++lis1.begin(), 1230);
    for (auto j = lis1.begin(); j != lis1.end(); j++)
    {
        if ((*j) % 2 == 0)
        {
            de1.push_back(*j);
        }
        else
        {
            de2.push_back(*j);
        }
    }
    for (auto z = de2.begin(); z != de2.end(); z++)
    {
        cout <<*z << endl;
    }
    cout << "_____________________________________________"<< endl;
    for (auto zz = de1.begin(); zz != de1.end(); zz++)
    {
        cout << *zz << endl;
    }
    cout << "_____________________________________________" << endl;
    list<int> ll = { 1,2,3,4,5,6,7,8,9,10 };
    auto iter = ll.begin();
    while (iter != ll.end())
    {
        if ((*iter) % 2 == 0)
        {
            iter = ll.erase(iter);//为什么这里要加上“iter=？？？”
        }
        else
        {
            ++iter;
        }
    }
    for (auto ii = ll.begin(); ii != ll.end(); ii++)
    {
        cout <<*ii << endl;
    }
    system("pause");
    return 0;
}

