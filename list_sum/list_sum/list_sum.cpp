// list_sum.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <list>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

typedef struct list_1
{
    int date;
    list_1* next;

}*li, lis;
int sum = 0;

void sum_list()
{
    list_1 *firstlist = new list_1;
    firstlist->date = 0;
    firstlist->next = nullptr;
    list_1 *temp_list = firstlist;
    for (int i = 1; i < 11; i++)
    {
        list_1* listnode = new list_1;
        listnode->date = i;
        listnode->next = nullptr;
        temp_list->next = listnode;
        temp_list = listnode;
    }
    cout << firstlist->date<< endl;
    cout << firstlist->next->next->next->date << endl;
    for (int j = 0; j < 11; j++)
    {
        
        sum = sum + firstlist->date;
        firstlist = firstlist->next;
    }
    cout <<sum << endl;
    
}


int main()
{
    list_1* p=nullptr;

    sum_list();
    system("pause");
    return 0;
}

