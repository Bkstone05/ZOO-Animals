


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
    ListNOde *tail; 

    public: 
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }
    
}
#endif