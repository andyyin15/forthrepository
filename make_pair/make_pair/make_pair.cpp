// make_pair.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <utility>
using namespace std;



int main()
{
    map<string, vector<int>> maptest;
    
    maptest.insert(make_pair<string, vector<int>>("lily", { 2,4,5 }));
    maptest.insert(make_pair<string, vector<int>>("bibi", { 2,4,44 }));
    maptest.insert(make_pair<string, vector<int>>("luyly", { 2,14,15 }));
    cout << maptest["lily"][1]<< endl;
    for (auto i = maptest.begin(); i != maptest.end(); i++)
    {
        cout <<(*i).first<< endl;
        cout << (*i).second[0] << endl;
        
    }
    auto z = maptest.erase("lily");
    cout << z << endl;
    system("pause");
    return 0;
}

