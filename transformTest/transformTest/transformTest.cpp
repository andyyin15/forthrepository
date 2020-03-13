// transformTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int mulvector(vector<int>  x, vector <int>y)
{
    if (x.size() != y.size())
    {
        return 0;
    }
    vector<int>z;
    int j = 0;
    auto yiter = y.begin();
    for (auto i = x.begin(); i != x.end(); i++)
    {
        
         auto val =(*i) *(*(yiter + j));
         z.push_back(val);
        j++;
    }
    for (auto ii = z.begin(); ii != z.end(); ii++)
    {
        cout <<*(ii) << endl;
    }
    return 1;
}


int main()
{
    vector<int>vec1 = { 2,2,2,2 };
    vector<int>vec2 = {3,3,3,3};
    mulvector(vec1, vec2);
    system("pause");
    return 0;
}

