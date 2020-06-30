// vectorearseTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> vec = {1,2,3,4,5,6,7,8};
    /*cout << vec.at(2) << endl;
    vec.erase(vec.begin());
    cout << vec.at(2) << endl;*/
    vector<int>::iterator iter;
    for (iter = vec.begin(); iter != vec.end(); iter++)
    {
        if (*iter == 3)
        {
            iter = vec.erase(iter);
        }
        else
        {
            iter++;
        }
    }
    cout << "*****************" << endl;
    cout <<vec.capacity() << endl;
    //cout << vec.at(5) << endl;
    system("pause");
    return 0;
}

