// stackTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stack>
#include <iostream>
using namespace std;



int main()
{
    stack<int> s;
    for (int i = 0; i < 10; i++)
    {
        s.push(i);
    }
    cout << s.size()<< endl;
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    system("pause");
    return 0;
}

