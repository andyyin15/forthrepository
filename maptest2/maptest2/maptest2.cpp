// maptest2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <map>
#include <string>
#include <iostream>
using namespace std;



int main()
{
    map<int, string> maptest;
    map<int, string>::iterator it;
    map<int, string>::key_type key;
    map<int, string>::value_type val;
    maptest[1] = "qwe";
    maptest.insert(pair<int, string>(2, "asdf"));
    map<int, string> map2;
    map2[3] = "iop";
    map2[4] = "jkl";
    //map<int, string> maptest(map2);
    for (auto i = maptest.begin(); i != maptest.end(); i++)
    {
        cout << i->first << "=>" << i->second << endl;
    }
    for (auto j = maptest.rbegin(); j != maptest.rend(); j++)
    {
        cout << j->first << "=>" << j->second << endl;
    }
    auto fir = maptest.begin();
    auto las = maptest.rbegin();
    
    system("pause");
    return 0;
}

