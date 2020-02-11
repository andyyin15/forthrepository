// aeiou.cpp : 定义控制台应用程序的入口点。
//
//英语有 26 个字母，元音只包括 a、e、i、o、u 这五个字母，其余的都为辅音。y是半元音、半辅音字母，但在英语中都把他当作辅音。

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//int main()
//{
//    string arr[100] = { "A","E","I","O","U","a","e","i","o","u" };
//    string x;
//    cout << arr[2] << endl;
//    cout << "请输入一个字母：" << x << endl;
//    cin >> x;
//    for (int i = 0; i <= 10; i++)
//    {
//        if (x == arr[i])
//        {
//            cout << "是元音" << endl;
//            break;
//        }
//        else
//        {
//            cout << "辅音" << endl;
//            
//        }
//    }
//    system("pause");
//    return 0;
//}

int main()
{
    string eng;
    cout << "请输入一个字母：" << endl;
    cin >> eng;
    if (eng == "a"|| eng == "e"|| eng == "i"|| eng == "o"|| eng == "u"|| eng == "A"|| eng == "E"|| eng == "I"|| eng == "O"|| eng == "U")
    {
        cout << "元音"<<endl;
    }
    else
    {
        cout << "辅音" << endl;
    }
    system("pause");
    return 0;
}

