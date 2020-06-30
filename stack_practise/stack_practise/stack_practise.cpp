// stack_practise.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class StackTest
{
public:
    StackTest()=default;
    void push(int x);
    int pop();
    int retuen_min();


private:
    stack<int> stackData;
    stack<int> stackMin;
};


 
void StackTest::push(int x)
{
    stackData.push(x);
    if (stackMin.empty())
    {
        stackMin.push(x);
    }
    else
    {
        int z;
        if (x >= stackMin.top())
        {
            z = stackMin.top();
            stackMin.push(x);
            stackMin.push(z);
        }
        else
        {
            stackMin.push(x);
        }
    }
}

int StackTest::pop()
{
    
    
     stackMin.pop();
     cout << stackMin.top() << endl;
     return 0;

}

int StackTest::retuen_min()
{
    if (!stackMin.empty())
    {
        cout << stackMin.top() << endl;
        return stackMin.top();
    }
}

int main()
{

    StackTest sta;
    sta.push(123);
    sta.push(12);
    sta.push(14);
    sta.retuen_min();
    system("pause");
    return 0;
}

