// queuelist.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

struct single_node
{
    int data;
    single_node* next;
};

struct queue_list
{
    single_node* front;
    single_node* rear;
};

void InitQueue(queue_list &Q)
{
    single_node* q;
    q = new  single_node;
    q->next = nullptr;
    Q.front = q;
    Q.rear = Q.front;

}

int IsEmpty(queue_list &Q)
{
    if (Q.front == Q.rear)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void EnQueue(queue_list &Q, int e)
{
    single_node* q;
    q = new single_node;
    q->next = nullptr;
    q->data = e;
    Q.rear->next = q;
    Q.rear = q;
}


void DeQueue(queue_list &Q, int &e)
{
    single_node* q;
    q = Q.front->next;
    e = q->data;    //����Ҫ�����е�����
    Q.front->next = q->next;
    if (Q.front == q)
    {
        Q.front = Q.rear;
    }
    delete q;
}

void DestoryQueue(queue_list &Q)
{
    if (Q.front)
    {
        Q.rear = Q.front;
        delete Q.front;
        Q.front = Q.rear;//Q.rear�������ˣ�
    }
}


int main()
{

    system("pause");
    return 0;
}

