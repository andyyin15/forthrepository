// bb.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include <iostream>
using namespace std;

int hls(int& a1, int& a2, int& b1, int& b2) //��������ʽ����
{
    int temp;
    temp = a1*b2 - a2*b1;
    return temp;
}

int main()
{
    int x1 = 11; int x2 = 9;
    int y1 = 15; int y2 = 14;  //�������
    int result;  //����ʽ������
    result = hls(x1, x2, y1, y2);   //result=hls(11,9,15,14)�ᱨ��
    cout << result << endl;
    system("pause");
    return 0;
}