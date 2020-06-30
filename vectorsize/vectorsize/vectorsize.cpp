// vectorsize.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<vector>
#include<iostream>
using namespace std;

int main()
{
    vector<int> vec = {1,2,3,4,5,66};
    for (auto z = vec.begin(); z != vec.end(); z++)
    {
       // auto *p = &vec;
        //cout << (*(p + z)) << endl;
        cout <<*z<< endl;
       
        //cout << *(&vec + i) << endl;
       // cout << sizeof(i)<< endl;
    };
    for (auto z = 1; z < vec.size(); z++)
    {
        //auto *p = &vec;
        //cout << (*(p + z)) << endl;
        cout << *(vec+1) << endl;

        //cout << *(&vec + i) << endl;
        // cout << sizeof(i)<< endl;
    };
    cout << "***************************" << endl;
    int i, *pa, a[] = { 3,4,5,6,7,3,7,4,4,6 };
    pa = a;
    for (i = 0; i <= 9; i++)
    {
        std::cout << *(pa + i) << std::endl;
        cout << "****************************^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
        cout << *(a+i)<< endl;
    }
    system("pause");
    return 0;
}

