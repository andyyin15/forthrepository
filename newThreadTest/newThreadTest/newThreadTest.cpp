// newThreadTest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <thread>
//#include "pch.h"
using namespace std;

void fun()
{
    cout <<"hello world!" << endl;
}

int main()

{
    for (int i = 0; i< 5; i++)
    {
        thread t(fun);
        t.join();
    }
   
    cout << "this is main thread"<< endl;
    system("pause");
    return 0;
}

