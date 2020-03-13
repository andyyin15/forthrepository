// list.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <list>
#include <iostream>
#include <iterator>
#include <array>
using namespace std;

int main()
{
    array<int, 10> arr;
    list<int> l{ 1,2,3 };
    vector<double> v(l.begin(), l.end());
    v.push_back(22);
    l.assign(v.begin(), v.end());
    

    
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout << "heool"<<list<int>::size_type() << endl;
    cout << "heool" << vector<double>::size_type() << endl;
    cout << "heool" << array<int, 10>::size_type() << endl;
    cout <<l.size() << endl;
    auto ele = l.begin();
    auto ele2 = l.end();
    cout << *ele << endl;
    auto i = l.begin();
    int j = 0;
    while (j < 2)
    {
        i++;
        j++;
    }
    ele = l.erase(ele, i);
    cout << *ele<< endl;
    system("pause");
    return 0;
}

