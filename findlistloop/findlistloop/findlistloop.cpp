// findlistloop.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <list>
#include <iostream>
using namespace std;

typedef struct MyStruct
{
    int a;
    struct MyStruct *next;
}node,*linknode;

void findlistloop(node * head)
{
    node *p= nullptr;
    node *q=nullptr;
    p = head;
    q = p->next;
    if (p != nullptr&&q != nullptr&&q->next != nullptr&&p != q)
    {
        p = p->next;
        q = q->next->next;
    }
    if (p == q)
    {
        cout << "链表有循环"<< endl;
    }
    if (q == nullptr || q->next == nullptr|| q->next->next==nullptr)
    {
        cout << "结束了"<< endl;
    }
}


int main()
{
    node* headptr = new node;
    headptr->a = 0;
    headptr->next = nullptr;
    node*firstnode = headptr;
    for (int i = 1; i < 11; i++)
    {
        
        node* p = new node;
        p->a = i;
        p->next = nullptr;
        firstnode->next = p;
        firstnode = p;
    }
    findlistloop(headptr);
    cout << headptr->next->next->a << endl;
        
    system("pause");
    return 0;
}

