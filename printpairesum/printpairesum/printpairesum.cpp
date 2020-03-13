// printpairesum.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <iostream>
using namespace std;
#include<algorithm>

void printPairSum(vector<int> x, int sum)
{
    sort(x.begin(), x.end());
    auto a = x.begin();
    auto b = x.end();
    for (int i = 0; i < x.size(); i++)
    {
   
        if (*(a )+ *(b- 1) == sum)
        {
            cout <<*(a)<< endl;
            cout << *(b - 1) << endl;
        }
        else if (*(a) + *(b - 1) < sum)
        {
           
             a++;
        }
        else if (*(a) + *(b - 1) > sum)
        {
            b--;
        }
    }
}
int main()
{
    vector<int> vec = {3,2,55,6,22,8,45,87,123,99,45};
    printPairSum(vec,30);
   system("pause");
    return 0;
}

