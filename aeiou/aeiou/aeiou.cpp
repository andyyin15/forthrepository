// aeiou.cpp : �������̨Ӧ�ó������ڵ㡣
//
//Ӣ���� 26 ����ĸ��Ԫ��ֻ���� a��e��i��o��u �������ĸ������Ķ�Ϊ������y�ǰ�Ԫ�����븨����ĸ������Ӣ���ж���������������

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//int main()
//{
//    string arr[100] = { "A","E","I","O","U","a","e","i","o","u" };
//    string x;
//    cout << arr[2] << endl;
//    cout << "������һ����ĸ��" << x << endl;
//    cin >> x;
//    for (int i = 0; i <= 10; i++)
//    {
//        if (x == arr[i])
//        {
//            cout << "��Ԫ��" << endl;
//            break;
//        }
//        else
//        {
//            cout << "����" << endl;
//            
//        }
//    }
//    system("pause");
//    return 0;
//}

int main()
{
    string eng;
    cout << "������һ����ĸ��" << endl;
    cin >> eng;
    if (eng == "a"|| eng == "e"|| eng == "i"|| eng == "o"|| eng == "u"|| eng == "A"|| eng == "E"|| eng == "I"|| eng == "O"|| eng == "U")
    {
        cout << "Ԫ��"<<endl;
    }
    else
    {
        cout << "����" << endl;
    }
    system("pause");
    return 0;
}

