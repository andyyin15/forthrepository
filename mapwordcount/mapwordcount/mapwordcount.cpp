// mapwordcount.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <map>
#include <string>
using namespace std;



int main()
{
    string str;
    map<string, size_t>word_count;
    cout << " please input a string !!"<< endl;
    while (cin >> str)
    {
        ++word_count[str];
    }
    for (auto &w : word_count)
    {
        cout << w.first << endl;
    }
    system("pause");
    return 0;
}

