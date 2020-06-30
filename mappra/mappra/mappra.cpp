// mappra.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <map>
#include <vector>
using namespace std;


int main()
{
    string str,str_children;
    map<string, vector<string>> family = { {"陈",{"andy","amy"}},{"宋",{"tt","boy","haha"}} };
    for (auto &fam : family)
    {
        cout << fam.first << endl;
        for (auto i = fam.first.begin(); i != fam.first.end(); i++)
        {
            cout << fam.first[*i] << endl;
        }
    }
    cout << "请输入一个姓氏："<< endl;
    cin >> str;
    if (family.find(str) == family.end())
    {
        family[str];
        cout << "请输入孩子们的名字：" << endl;
        
        while (cin >> str_children)
        {
            family[str].push_back(str_children);

        }
        
        
    }
    system("pause");
    return 0;
}

