// vec_pointer.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
#include <vector>
#include <functional>

//vector<int>vec

int func(int x, int y)
{
    cout << x + y << endl;
    return 0;
}






int main()
{
    int(*p)(int, int);
    p = func;
    vector<std::function<int(int, int)>>vec;
    //vector<*decltype(func)>vec;
    vec.push_back(p);
    (vec[0])(2, 3);
    system("pause");
    return 0;
}

