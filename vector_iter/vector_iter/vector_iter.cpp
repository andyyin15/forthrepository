// vector_iter.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <list>
using namespace std;



int main()
{
    vector<int> vec = {3,5,77,2,77,5};
    /*while (begin() !=end())
    {
        cout << *it<< endl;

        it++;
    }*/
    for (auto it = vec.begin(); it != vec.end(); it++)
    {
        cout <<*it << endl;
    }
    cout <<"********************************************************************" << endl;
    list<int> lis = {3,5,7,9};
    vector<double> vec1;
    vec1 = {lis.begin(),lis.end()};
    for (auto itr = vec1.begin(); itr != vec1.end(); itr++)
    {
        cout << *itr<< endl;
    }
    system("pause");
    return 0;
}

