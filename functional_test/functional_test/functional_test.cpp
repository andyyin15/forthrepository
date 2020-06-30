// functional_test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>
//#include <functional>
using namespace std;

int main()
{
    std::vector<int> c{ 1, 5, 3, 4, 5, 6, 7 };
    int x = 5;
    int k = std::count_if(c.begin(), c.end(), [x](int n) {return x == n; });
    cout << k << endl;
    system("pause");
    return 0;

}

