// maptype.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <map>
#include <vector>
using namespace std;


int main()

{

    map<int, vector<int>> maptype;
    map<int, vector<int>> ::key_type k;
    k = 1;
    cout << k<< endl;
    system("pause");
    return 0;
}

