// mappra.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <map>
#include <vector>
using namespace std;


int main()
{
    string str,str_children;
    map<string, vector<string>> family = { {"��",{"andy","amy"}},{"��",{"tt","boy","haha"}} };
    for (auto &fam : family)
    {
        cout << fam.first << endl;
        for (auto i = fam.first.begin(); i != fam.first.end(); i++)
        {
            cout << fam.first[*i] << endl;
        }
    }
    cout << "������һ�����ϣ�"<< endl;
    cin >> str;
    if (family.find(str) == family.end())
    {
        family[str];
        cout << "�����뺢���ǵ����֣�" << endl;
        
        while (cin >> str_children)
        {
            family[str].push_back(str_children);

        }
        
        
    }
    system("pause");
    return 0;
}

