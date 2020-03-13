// countvector.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <list>
#include <iterator>
using namespace std;

int main()
{
    vector<int> vec = { 1,2,34,56,76,45,234,4,4,3,3,3,3 };
    auto val_count = count(begin(vec), end(vec), 3);
    cout << val_count<< endl;
    auto sum = accumulate(vec.begin(), vec.end(), 0);
    cout << sum << endl;

    list<int> ll = {123,3254,213,534,1232,22,22,22,22,432};
    replace(ll.begin(),ll.end(),22,999);
    vector<double>vec1;
    replace_copy(ll.begin(), ll.end(), back_inserter(vec1), 999, 1000);
    //cout << vec1[8] << endl;
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i]<< endl;
    }
    int y;
    auto f = [ y](int x) {return x + y; };

    vector<string>vec2 = {"qwe","qweqweqwe","qweqweqwe","qweqweqweqweqweqwe"};
    auto countif = count_if(vec2.begin(), vec2.end(), [=](string x) {return x == "qweqweqwe"; });
    cout << countif << endl;
    system("pause");
    return 0;
}

