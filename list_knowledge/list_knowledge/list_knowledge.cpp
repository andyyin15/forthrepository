// list_knowledge.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <list>
using namespace std;

class node
{
public:
    node() :data(-1), next(nullptr) {};
    
public:
    int data;
    node* next;
};
class listnode
{
public:
    listnode(){
    this->head = new node();
    this->head->next = nullptr;
    this->size = 0;

};
    void list_insert(int pos, int value);
    void list_remove(int pos);
    void get_reverse_element(int k);
    void list_reverse(node* list_node);
    

    ~listnode();

public:
    node* head;
    int size;

};

void listnode::list_insert(int pos, int value)
{
    node* insert_node = new node();
    insert_node->data = value;
    insert_node->next = nullptr;
    node* cur_node = new node();
    cur_node = head;

    for (auto i = 0; i < pos; i++)
    {
        if (cur_node != NULL)
        {
            cur_node = cur_node->next;

        }
    }
    insert_node->next = cur_node->next;
    cur_node->next = insert_node;
    size++;
}

void listnode::list_remove(int pos)
{
    node *cur_node = new node();
    cur_node = head;
    for (int i = 0; i < pos; i++)
    {
        cur_node = cur_node->next;
    }
    cur_node->next = cur_node->next->next;
    size--;
}

void listnode::get_reverse_element(int k)
{
    int cur_pos = size - k;
    node* now_node = new node();
    now_node = head;
    for (int i = 0; i < (cur_pos + 1); i++)
    {
        now_node = now_node->next;
    }
    cout <<now_node->data << endl;
}

void listnode::list_reverse(node* list_node)
{
    if (list_node!=nullptr)
    {
        if (list_node->next != nullptr)
        {
            list_reverse(list_node->next);
        }
        cout <<list_node->data << endl;
    }
}

listnode::~listnode()
{
}

int main()
{
    system("pause");
    return 0;
}

