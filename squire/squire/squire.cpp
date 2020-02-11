// squire.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
    int arr[4][4];
   /* for (int i = 1; i <= 4; i++)
    {
        
        for (int j = 1; j <= 4; j++)
        {
            cout << "*";
            if (j == 4)
            {
                cout << '\n';
            }
        }
    }*/

    /*for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4 - i; j++)
        {
            cout << "*";
            if (j == 4 - i)
            {
                cout << '\n';
            }
        }
    }*/
   /* for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
            if (j ==  i)
            {
                cout << '\n';
            }
        }
    }*/
   /* for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4 - i; j++)
        {
            cout << " ";
            if (j == 4 - i)
            {
                for (int z = 0; z <= i; z++)
                {

                    cout << "*" ;
                }
                cout << '\n';
            }
        }
    }*/
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == i)
            {
                cout << " ";
                for (int z = 0; z <= 4 - j; z++)
                {
                    cout << "*";
                }
                cout << '\n';

            }

        }
    }
    system("pause");
    return 0;
}

