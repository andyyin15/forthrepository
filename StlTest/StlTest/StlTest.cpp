// StlTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    vector<double>vec = { 3,55,2,7,55,8,46,9,2,454,76,33,1,4,5 };
    vector<int>vec1 = {3,4,6,2,4,5,9,78};
    //transform(vec1.begin(), vec1.end(), (vec1.end()+10), []() {return 51; });
    generate(vec1.begin(), (vec1.begin() + 5) , []() {return 5; });
  
    
    unique(vec.begin(),vec.end());
     for (auto i = vec.begin(); i != vec.end(); i++)
    {
    cout <<*i << endl;
    }
    cout << vec.size()<< endl;
    sort(vec.begin(), (vec.begin()+15));

    vector<double>::iterator  iter = lower_bound(vec.begin(), vec.end(), 55);
    auto pos = iter - vec.begin();
    cout << pos << endl;
    cout <<*(vec.begin()+11) << endl;
    system("pause");
    return 0;
}

