// inserttest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <list>
#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> vec;
    list<int> l_test = {4,6,2};
    l_test.insert(l_test.begin(),9);
    list<int> ll = {11,33,55};
    l_test.insert(l_test.begin(), ll.begin(), ll.end());
    l_test.insert(l_test.begin(),1, 999);
    l_test.swap(ll);
    vec.assign(ll.begin(), ll.end());
    l_test.splice(l_test.begin(), ll, ll.begin());
    cout << *(l_test.begin())<< endl;
    cout << *(ll.begin())<< endl;
    cout << "**********************"<< endl;
    for (auto i = vec.begin(); i != vec.end(); i++)
    {
        cout << *i << endl;
    }
    system("pause");
    return 0;
}

