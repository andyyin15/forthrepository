// stl_test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <deque>
using namespace std;


int main()
{
    deque<int> se;
    deque<int> se1;
    deque<int> se2;
    deque<int> se3;
    list<deque<int>> li;
    list<deque<int>>::iterator iter;
    se.push_back(11);
    se1.push_back(11);
    se2.push_back(11);
    se3.push_back(11);
    cout << se.at(0)<< endl;
    li.push_back(se);
    li.push_back(se1);
    li.push_back(se2);
    li.push_back(se3);
    for (iter = li.begin(); iter != li.end(); iter++)
    {
        cout << (*iter).at(0)<< endl;
    }
    deque<int>::value_type see;
    cout <<sizeof(see) << endl;
    system("pause");
    return 0;
}

