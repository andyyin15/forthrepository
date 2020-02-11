// lambdatest.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"

using namespace std;

class Test {
public:
    void hello() {
        cout << "test hello!\n";
    };
    void lambda() {
        auto fun = [this] { 
            this->hello();
        };
        fun();
    }
};

int main()
{
    int i2 = 777, j2 = 888;
    cout << "i2 = " << i2 << endl;
    cout << "j2 = " << j2 << endl;
    auto f2 = [=, &i2] { cout << "i2 = " << i2 << " ,j2 = " << j2 << endl; }; // Ĭ�Ͽ����ⲿ���б����������ñ���i2
    f2();
    int i3 = 444, j3 = 555;
    int &a = i2;
    a = 3;

    cout << "�ⲿ����i3 = " << i3 << " i3�ĵ�ַ��: " << &i3 << endl;
    auto f3 = [i3] { cout << "�ڲ�����i3 = " << i3 << " i3�ĵ�ַ��: " << &i3 << endl; };
    f3();
    system("pause");
    return 0;
}

