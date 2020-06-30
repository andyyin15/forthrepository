// zhan_array.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <array>
#include <string>
using namespace std;

class zhan_array
{
public:
    zhan_array();
    ~zhan_array();
    void push(int x);
    void pop();


private:
    int count;
    int zhan_size;
    int data;
    int zhan[10];

};

zhan_array::zhan_array()
{
    this->data = 0;
    this->count = 0;
    this-> zhan_size = 10;
    //zhan[10];
}

void zhan_array::push(int x)
{
    if (zhan_size == count)
    {
        cout << "zhan_array is full"<< endl;
    }
    zhan[count] = x;
    ++count;

}

void zhan_array::pop()
{
    if (count == 0)
    {
        cout << "zhan_array is empty"<< endl;
    }
    cout << zhan[count-1]<< endl;
    --count;
}

zhan_array::~zhan_array()
{
}

int main()
{
    zhan_array new_zhan;
    new_zhan.push(123);
    new_zhan.pop();
    system("pause");
    return 0;
}

