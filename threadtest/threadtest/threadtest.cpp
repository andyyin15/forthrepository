// threadtest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <thread>
using namespace std;

void fun()
{
    cout << "threadson"<< endl;
}


int main()
{
    for (int i = 0; i < 5; i++)
    {
        thread t(fun);
        t.join();
    }
    cout << "mainmainmain"<< endl;
    cout << "mainmainmain" << endl;
    cout << "mainmainmain" << endl; 
    cout << "mainmainmain" << endl;


    system("pause");
    return 0;
}

