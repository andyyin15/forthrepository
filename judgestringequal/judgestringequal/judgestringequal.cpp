// judgestringequal.cpp : 定义控制台应用程序的入口点。
//判断两个字符串是否相等。忽略大小写。(eg:例如，输入 “hello”和”hELlO”，认为它们是相等的。返回值：1表示相等。0表示不同)

#include "stdafx.h"
#include <iostream>
using namespace std;
#include<vector>
#include <string>
#include <algorithm>

//string judgestr(string x, string y)
//{
//    int z = 0;
//    if (x.size() == y.size())
//    {
//        for (int i = 0; i<x.size(); i++)
//        {
//            if (x[i] != y[i])
//            {
//                cout << "no" << endl;
//                break;
//            }
//            if (x[i] == y[i])
//            {
//                z = z + 1;
//                if (z = x.size()-1)
//                {
//                    cout << "yes" << endl;
//                    break;
//                }
//            }
//            
//        }
//    }
//    else
//    {
//        cout << "no"<<endl;
//    }
//    
//    //cout << "yes" << endl;
//    return x;
//    
//}

string judgestr1(string* x, string* y)
{
    int z = 0;
    if (x->size() == y->size())
    {
        for (int i = 0; i < x->size(); i++)
        {
            if (x[i] != y[i])
            {
                cout << "no" << endl;
                break;
            }
            if (x[i] == y[i])
            {
                z = z + 1;
                if (z = x->size() - 1)
                {
                    cout << "yes" << endl;
                    break;
                }
            }
        }
    }
    else
    {
        cout << "no" << endl;
    }

   
    return *x;
}

int main()
{
    string* str1=nullptr; 
    string* str2 = nullptr; 
    cout << "input two string" << endl;
    string str11;
    string str22;
    
    cin >> str11;
    cin >> str22;
    *str1 = str11;
    *str2 = str22;
  
    transform(str1->begin(), str1->end(), str1->begin(), ::tolower);
    transform(str2->begin(), str2->end(), str2->begin(), ::tolower);
    judgestr1(str1, str2);
    system("pause");
    return 0;
}

