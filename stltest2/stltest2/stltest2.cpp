// stltest2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int sum1(int x, int y)
{
    return x + y;
}
int main()
{
    vector<int>vec = {3,5,2,7,4,9,4};
    vector<int>vec1 = {9,6,3,7,2,6,1};
    vector<int>vec2;
   // vec2.resize(17);
    sort(vec.begin(), vec.begin() + 7);
    sort(vec1.begin(), vec1.begin() + 7);

    //reverse(vec.begin(), vec.end());*/
    /*for (auto i = vec.begin(); i != vec.end(); i++)
    {
        cout << *i<< endl;
    }*/
    merge(vec.begin(), vec.end(), vec1.begin(), vec1.end(), back_inserter(vec2));
    for (auto i = vec2.begin(); i != vec2.end(); i++)
    {
        cout << *i << endl;
    }
    cout << "*****************************************************************************"<< endl;
    random_shuffle(vec.begin(), vec.end());
    for (auto ii = vec.begin(); ii != vec.end(); ii++)
    {
        cout << *ii << endl;
    }
    cout << *(max_element(vec.begin(), vec.end())) << endl;
    system("pause");
    return 0;
}

