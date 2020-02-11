// getline.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <string>

int main()
{
    //string name;
    ////getline(cin,name);
    ////cin.getline
    //cin >> name;
    //cout << name << endl;

    /*string str = "qwertasdfg";
    for (auto c : str)
    {
        cout << c << endl;
    }*/
    string str = "qwerAasdfg";
    for (auto &c : str)
    {
        c = toupper(c);
    }
    cout << str << endl;

    if (!str.empty())
    {
        cout << str[0] << endl;
        auto x = str.end()-1;
        cout << x << endl;
        cout << str.size() << endl;

    }
    system("pause");
    return 0;
}

