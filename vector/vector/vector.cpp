// vector.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <vector>


int main()
{
    vector<int> vec;
    for (int i = 0; i <= 99; i++)
    {
        vec.push_back(i);
    }
    cout << vec[10] << endl;
    vector<int> vec2;
    int num;
    while (cin >> num)
    {
        vec2.push_back(num);
        cout << vec2[0] << endl;
    }
    

    system("pause");
    return 0;
}

