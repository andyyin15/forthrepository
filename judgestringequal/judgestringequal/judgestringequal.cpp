// judgestringequal.cpp : �������̨Ӧ�ó������ڵ㡣
//�ж������ַ����Ƿ���ȡ����Դ�Сд��(eg:���磬���� ��hello���͡�hELlO������Ϊ��������ȵġ�����ֵ��1��ʾ��ȡ�0��ʾ��ͬ)

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

