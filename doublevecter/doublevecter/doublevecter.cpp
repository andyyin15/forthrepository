// doublevecter.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>

int main()
{
    int arr[2] = { 0,102 };
    int *ppp;
    cout << sizeof(ppp)<<endl;
    auto *pp = &arr;
    auto poi = sizeof(arr) / sizeof(*pp);
    auto ppoi = sizeof(pp) / sizeof(*pp);
    cout << poi << endl;
    cout << ppoi << endl;
    vector<int> vec{1,2,3,4,5,6,7,8,9,10};

    auto it = vec.begin();
    auto mid = (vec.end() - vec.begin()) / 2;
    cout << mid << endl;

    vector<int>::iterator p = max_element(vec.begin(), vec.end());
    cout << *p << endl;

    for (auto &r : vec)
    {
        if (vec.begin() != vec.end())
        {
           
            *it = (*it) * 2;
            it++;
        }
    }
    for (auto r : vec)
    {
        cout << r << endl;
    }
    system("pause");
    return 0;
}

