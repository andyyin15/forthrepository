// lower_boundTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<algorithm>
#include <iostream>
#include <functional>
using namespace std;

int main()
{
    int num[6] = { 1,2,4,7,15,34 };
    sort(num, num + 6);
    /* for (int i = 0; i < 6; i++)
     {
         cout <<num[i] << endl;
     }*/
    auto v = lower_bound(num, num + 6, 4);
    auto vv = upper_bound(num, num + 6, 4);
    cout << *v<< endl;
    cout << *(vv) << endl;
    cout <<"***********************************" << endl;
    
    int pos1 = lower_bound(num, num + 6, 7)-num;
    int pos2 = upper_bound(num, num + 6, 7)-num;
    cout << pos1 << endl;
    cout << pos2 << endl;
    system("pause");
    return 0;
}

