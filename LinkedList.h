


#ifndef LinkedList_H
#define LinkedList_H

#include <iostream>
using namespace std; 

template <typename T>
class LinkedList
{
    private:
    struct ListNode
    {
        string name, food;
        int age;
        float weight; 
    };
     
    ListNode *head;
    ListNode *tail; 

    public: 
    LinkedList()
    {
        head = NULL;
        tail = NULL;
        ListNode.name = " ";
        ListNode.food = " ";
        ListNode.age = 0;
        ListNode.weight = 0.0; 
    }

    LinkedList(string n, string f, int a, float w, ListNode h, ListNode, t)
    {
        this->head = h;
        this->tail = t;
        this->ListNode.name = n;
        this->ListNode.food = f;
        this->ListNode.age = a;
        this->ListNode.weight = w; 
    }

    
    
    

};
#endif