// map.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;
#include<map>
#include <string>
#include<math.h>

int main()
{
    map<string, int>imap;
    imap["one"] = 1;
    imap["two"] = 2;
    map<string, int>::iterator p = imap.begin();
    cout << p->first << endl;
    cout << p->second << endl;
    cout << ( ++p)->first << endl;
    cout << ( p)->second << endl;
   
    system("pause");
    return 0;
}

