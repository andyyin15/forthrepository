// sort.cpp : �������̨Ӧ�ó������ڵ㡣
//��ȡ�û����������Ȼ������ǴӴ�С����������(֪ʶ�㣺��������

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

void inputvector()
{
    vector<int> v1;
    v1.push_back(23);
    v1.push_back(3);
    v1.push_back(44);
    v1.push_back(234);
    v1.push_back(8);
    cout << "����ǰ" << endl;
    for (auto i : v1)
    {
        cout << i << " ";
    }
    sort(v1.begin(), v1.end());
    cout << endl << "����� ";
    for (auto i : v1)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    inputvector();
    system("pause");
    return 0;
}

