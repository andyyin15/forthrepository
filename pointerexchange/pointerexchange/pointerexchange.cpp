// pointerexchange.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void exchange(int* p, int *pp)
{
    int tmp = *p;
    *p = *pp;
    *pp = tmp;
       

        cout << "������" << *p << *pp << endl;
    
}
void print(const int ia[10])
{
    for (size_t i = 0; i != 10; ++i)
    {
        cout << ia[i] << endl;
    }
}

int main()
{

    int x, y;
    int ia[10] = { 0 };
    print(ia);
    cout << "����������" << endl;
    cin >> x >> y;
    //int *p, *pp;
    exchange( &x,&y);
    system("pause");
    return 0;
}

