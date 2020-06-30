// arrattest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <list>
#include <array>
#include <string>
#include <iostream>
using namespace std;



int main()
{
    int a[] = {0,1,1,2,3,5,8,13,21,55,89};
    vector<int> vec;
    /*vec.reserve(11);
    vec.resize(11);
    memccpy(&vec[0], a, 11 * sizeof(int));*/
    vec.reserve(11);
    //vec.assign(&a[0], &a[11]);
    auto aa = &a;
    vec.assign(*aa, *aa+11);
    for (auto i = vec.begin(); i != vec.end(); i++)
    {
        cout <<*i << endl;
    }
    cout << "______________________________________" << endl;
    int a1[] = { 0,1,1,2,3,5,8,13,21,55,89 };
    vector<int> vec1;
    vec1.reserve(11);
    //vec1.resize(11);
    copy(&a1[0],&a1[11],back_inserter(vec1));
    for (auto ii = vec1.begin(); ii != vec1.end(); ii++)
    {
        cout << *ii << endl;
    }
    system("pause");
    return 0;
}

