// findvector.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    string  str[] = {"qwe","asd","zxc","tyu"};
    auto val = find(begin(str), end(str), "asd");
    cout <<*val << endl;
    vector<int>vec = {2,4,5,2,4,6,2,7,2,9,4,2,2};
    sort(vec.begin(), vec.end());
    for (auto i = vec.begin(); i != vec.end(); i++)
    {
        cout <<*i << endl;
    }
    auto accu = accumulate(begin(vec), end(vec), 0);
    cout << accu << endl;
    auto coun = count(begin(vec), end(vec), 2);
    cout << coun << endl;
    system("pause");
    return 0;
}

