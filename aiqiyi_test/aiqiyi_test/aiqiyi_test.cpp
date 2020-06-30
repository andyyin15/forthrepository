// aiqiyi_test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;
int i = 0;
void func()
{
    string str[4] = {")",")",")",")"};
    
    cout << "please input string"<< endl;
    
    stack<string> sta;
    for (auto j = 0; j < sizeof(str[4])/sizeof(str); j++)
    {
    
        if (sta.empty())
        {
            if (str[0] == ")")
            {
                break;
            }
        }
        if (str[j] == "(")
        {
            i++;
            sta.push(str[j]);
        }

        else if(str[j] == ")")
        {
            i--;
            sta.push(str[j]);
        }
    }
    


}

int main()
{
    func();
    system("pause");
    return 0;
}

