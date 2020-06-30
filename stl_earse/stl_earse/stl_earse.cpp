// stl_earse.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <numeric>
using namespace std;



int main()
{
    vector<int> vec = {3,5,1,34,7,99,56};
    auto num = vec.erase(vec.begin());
    cout << vec.at(2) << endl;
    cout << *(++(++vec.begin())) << endl;
    cout <<"****************" << endl;
    map<char, int> maptest;
    maptest['x'] = 1;
    maptest['y'] = 2;
    cout <<maptest.at('x') << endl;
    //cout << maptest.at(3) << endl;
    cout << maptest[maptest.at('x')] << endl;
    cout << (*(maptest.begin())).first << endl;
    cout << (*(maptest.begin())).second << endl;
    system("pause");
    return 0;
}

