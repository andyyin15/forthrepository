// bb4ac.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int a, b, c, bb4ac, ab, x1, x2;
    cout << "��������������" << endl;
    cin >> a >> b >> c;
    if (sqrt((b*b) - (4 * a*c))>0)
    {
        cout << "������ʵ����" << endl;
        x1 = -(b / a) / 2 + (sqrt((b*b) - (4 * a*c))) / (2 * a);
        x2 = -(b / a) / 2 - (sqrt((b*b) - (4 * a*c))) / (2 * a);
        cout << x1 << endl;
        cout << x2 << endl;
    }
    else if (sqrt((b*b) - (4 * a*c)) == 0)
    {
        cout << "��������ȵ�ʵ����" << endl;
        x1 = -(b / a) / 2;
        cout << "x1=x1=" << x1 << endl;
    }
    else
    {
        cout << "û��ʵ����" << endl;
    }

    system("pause");
    return 0;
}

