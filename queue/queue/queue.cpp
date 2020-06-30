// queue.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <queue>
#include <iostream>
using namespace std;



int main()
{
    queue<int> que;
    for (int i = 0; i < 10; i++)
    {
        que.push(i);
    }
    if (!que.empty())
    {
        cout <<que.size() << endl;
        cout << que.front()<< endl;
        cout << que.back()-que.front()<< endl;
    }
    cout << "*******************************************"<< endl;
    for (int j = 0; j < 10; j++)
    {
        cout <<que.front() << endl;
        que.pop();
    }
    system("pause");
    return 0;
}

