// tranformtest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> vec1;
    vec1.resize(10);
    vector<int> vec = {2,5,-5,-7,-99,5,2,};
    sort(vec.begin(),vec.end());
    for (auto v = vec.begin(); v != vec.end(); v++)
    {
        cout << *v<< endl;
    }
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<< endl;
    transform(vec.begin(), vec.end(), vec.begin(), [](int x) {return x < 0 ? -x : x; });
    for (auto i=vec.begin(); i != vec.end(); i++)
    {
        cout <<*i << endl;
    }
    auto  iter = find(vec.begin(), vec.end(), 5);
    cout <<*iter << endl;
    cout << "**********************************************"<< endl;
    remove_if(vec.begin(), vec.end(), [](int z) {return z == 5; });
    for (auto ii = vec.begin(); ii != vec.end(); ii++)
    {
        cout << *ii << endl;
    }
    cout << "**********************************************" << endl;
    copy(vec.begin(),vec.end(),vec1.begin());
    for (auto ii = vec1.begin(); ii != vec1.end(); ii++)
    {
        cout << *ii << endl;
    }
    system("pause");
    return 0;
}

