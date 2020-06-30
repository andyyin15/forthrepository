// mapvector.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <map>
#include <vector>
#include <string>
using namespace std;
#include <iostream>


int main()
{
    multimap<string, string> maptest = { {"lili","zhognguo"},{"erin","meiguo"},{"lili","yingguo"} };
    for (auto i = maptest.begin(); i != (maptest.end()); ++i)
    {
        cout <<i->second << endl;
    }
    auto ele = maptest.find("lili");

    maptest.erase(ele);
    for (auto i = maptest.begin(); i != (maptest.end()); ++i)
    {
        cout << i->second << endl;
    }
    maptest.insert(make_pair("erin","hanguo"));
    maptest.insert(make_pair("taily", "riben"));
    maptest.insert(make_pair("erin", "chaoxian"));
    cout <<"*******************************************************" << endl;
    for (auto i = maptest.begin(); i != (maptest.end()); ++i)
    {
        cout << i->second << endl;
    }
    system("pause");
    return 0;
}

