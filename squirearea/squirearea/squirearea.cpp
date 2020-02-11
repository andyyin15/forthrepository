// squirearea.cpp : 定义控制台应用程序的入口点。
// 设计一个立方体类BOX，它能计算并输出立方体的体积和表面积。

//提示：定义一个BOX类，含有一个私有数据成员（立方体边长length），有两个公有数据函数（构造

//函数Box和计算输出函数show）

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
    cout << "请输入长，宽，高，以回车隔开"<< endl;
    cin >> x;
    cin >> y;
    cin >> z;
    SquareData ss;
    cout << ss.squiraarea(x, y, z)<<endl;
    cout << ss.squireface(x, y, z) << endl;
    system("pause");
    return 0;
}

