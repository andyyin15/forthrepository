// bb4ac.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int a, b, c, bb4ac, ab, x1, x2;
    cout << "请输入三个数字" << endl;
    cin >> a >> b >> c;
    if (sqrt((b*b) - (4 * a*c))>0)
    {
        cout << "有两个实数根" << endl;
        x1 = -(b / a) / 2 + (sqrt((b*b) - (4 * a*c))) / (2 * a);
        x2 = -(b / a) / 2 - (sqrt((b*b) - (4 * a*c))) / (2 * a);
        cout << x1 << endl;
        cout << x2 << endl;
    }
    else if (sqrt((b*b) - (4 * a*c)) == 0)
    {
        cout << "有两个相等的实数根" << endl;
        x1 = -(b / a) / 2;
        cout << "x1=x1=" << x1 << endl;
    }
    else
    {
        cout << "没有实数根" << endl;
    }

    system("pause");
    return 0;
}

