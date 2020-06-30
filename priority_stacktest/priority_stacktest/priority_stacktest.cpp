// priority_stacktest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <queue>
#include <vector>
#include <iostream>
#include <set>
using namespace std;



int main()
{
    priority_queue< pair<int, int> > pq;
    pair<int, int> a = {11,1};
    pair<int, int> b = {22,2};
    pair<int, int> c = { 33,3 };
    pq.push(a);
    pq.push(b);
    pq.push(c);
    while (!pq.empty())
    {
        cout <<pq.top().first <<pq.top().second << endl;
        pq.pop(); "\n";
    }
    set<int> set_test = { 55,55,55,66,77,88};
    auto  aa = set_test.upper_bound(80);
    auto bb = set_test.lower_bound(65);
    cout << *aa<< endl;
    cout << *bb << endl;
    auto times = set_test.count(55);
    cout << times << endl;
    system("pause");
    return 0;
}

