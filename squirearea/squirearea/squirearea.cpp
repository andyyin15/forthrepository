// squirearea.cpp : �������̨Ӧ�ó������ڵ㡣
// ���һ����������BOX�����ܼ��㲢��������������ͱ������

//��ʾ������һ��BOX�࣬����һ��˽�����ݳ�Ա��������߳�length�����������������ݺ���������

//����Box�ͼ����������show��

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<string>

class SquareData
{
    private:
        int x, y, z;
    public:
        int squiraarea(int x, int y, int z)
        {
            //cout << x*y*z<<endl;
            return x*y*z;
        }
        int squireface(int x, int y, int z)
        {
            //cout << (x*y) * 2 + (x*z) * 2 + (y*z) * 2 << endl;
            return (x*y) * 2 + (x*z) * 2 + (y*z) * 2;
        }

};

int main()
{
    int x, y, z;
    cout << "�����볤�����ߣ��Իس�����"<< endl;
    cin >> x;
    cin >> y;
    cin >> z;
    SquareData ss;
    cout << ss.squiraarea(x, y, z)<<endl;
    cout << ss.squireface(x, y, z) << endl;
    system("pause");
    return 0;
}

