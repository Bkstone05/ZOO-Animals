#ifndef LinkedList_H
#define LinkedList_H

#include "Zoo.h"
#include <iostream>
using namespace std; 



template <typename T>
class LinkedList
{
    private:
    template <typename T>
    struct ListNode
    {
        T data; //stores data in the node
        ListNode* next; //pointer to next node

        //constructor
        ListNode(T newNode)
        {
            data = newNode;
            next = NULL;
        }
    };

    ListNode* head;
    ListNode* tail; 


    public: 
    /*********************************
     * Constructor
     ********************************/
    template<typename T> 
    LinkedList<T> :: LinkedList()
    {
        head = NULL;
        tail = NULL;
        
    }


    /*********************************
     * Destructor
     ********************************/
    template <typename T>
    LinkedList<T>::~LinkedList()
    {
        while(!isEmpty())
        {
            ListNode* temp = first();
            ListNode* tempT = end();
            head->next = temp->next;
            tail->next = tempT->next;
            delete tempT;
            delete temp;
        }
        delete head;
        delete tail; 
    }   

        
    /**************************************************************
     * Name: insertNode
     * Parameters: none
     * Purpose: Inserts a new npde 
     *************************************************************/
    template <typename T>
    void LinkedList<T>::insertNode(T& data, ListNode<T>* p)
    {
        ListNode* newNode = new ListNode<T>(data, p->next);
        p->next = newNode; 
    }
    
    /**************************************************************
     * Name: deleteNode
     * Parameters: int position -index to get deleted
     * Purpose: Removes/deletes a specified index in list 
     *************************************************************/
    template <typename T>
    void LinkedList<T>::deleteNode(T& data)
    {
        ListNode* nodePtr;
        ListNode* prevNode;

        //If List is Empty STOP
        if(!head)
        {
            return;
        }
        //Determine if deleting first node
        if(head->data == num)
        {
            nodePtr = head->next;
            delete head;
            head = nodePtr;
        }
        //not the first node in the list
        else
        {
            nodePtr = head;
        }

        if(nodePtr)
        {
            if(nodePtr == tail)
            {
                tail = previousNode;
            }
            previousNode->next = nodePtr->next;
            delete nodePtr;
        }
        

    }

    /**************************************************************
     * Name: displayList
     * Parameters: None
     * Purpose: Will display the linked list to screen 
     *************************************************************/
    template <typename T>
    void LinkedList<T>::displayList() const
    {
        const ListNode* p = first();
        while(p)
        {
            cout << p->element << "\n";
            p = p->next;  
        }
    }

    /**************************************************************
     * Name: isEmpty
     * Parameters: None
     * Purpose: Checks if list is empty 
     *************************************************************/
    template <typename t>
    bool LinkedList<T>::isEmpty()
    {
        return first() == NULL; //if true list is empty 
    }
        
    /**************************************************************
     * Name: find()
     * Parameters: UNSURE
     * Purpose: Finds a specified node and returns it 
     *************************************************************/
    template <typename T>
    ListNode<T>* LinkedList<T>::find()
    {
        
    }

    /**************************************************************
     * Name: findprevious()
     * Parameters: UNSURE
     * Purpose: Finds the node before
     *************************************************************/
    template <typename T>
    ListNode<T>* LinkedList<T>::findPrevious()
    {

    }


    /**************************************************************
     * Name: first
     * Parameters: None
     * Purpose: Returns first element/node in linked list 
     *************************************************************/
    template <typename T>
    void LinkedList<T>::first() const
    {
        return head->next;
    }

    /**************************************************************
     * Name: end 
     * Parameters: None
     * Purpose: Returns the end of the list  
     *************************************************************/
    template <typename T>
    void LinkedList<T>::end() const
    {
        return end -> next;
    }

    /*************************************************************************
     * Name: sortAZ
     * Parameters: None
     * Purpose: Sorts the Linked List from A-Z (forwards) using Selection sort
     ************************************************************************/
    template <typename T>
    void LinkedList<T>::sortAZ(returnNode)
    {
        string minIndex, minValue;
        string temp; //temp varible for swap
        
        //selction sort but instead of array your accessing the returnNode fn instead of the array
        for(int start = 0; start < (index -1) ; start++)
        {
            minIndex = head;
            minValue = returnNode(index);
            
            for(int i = start + 1; i < size; i++)
            {
                if(returnNode(index) < minValue)
                {
                    minValue = returnNode(index);
                    minIndex = i;
                }
            }

            temp = returnNode(minIndex);
            returnNode() = head;
            start = temp;

        }
    }


    template <typename T>
    ListNode LinkedList<T>:: returnNode(int index)
    {
        //return node at specific position
        ListNode* traverseList = head;
        
        //iterates num time of index
        //start at postion 0, just like an array
        for(int temp = 0; temp < index; temp++)
        {
            //setting ptr equal to next item in list
            traverseList = traverseList->next;
        }
        
        
        return traverseList;
         
    }

    /************************************************************************
     * Name: sortZA
     * Parameters: UNSUREEEE
Selection Sort             * Purpose: Sorts the Linked List from Z-A (backwards) using 
     ***********************************************************************/
    template <typename T>

    void LinkedList<T>::sortZA()
    {
string minIndex, miaxalue;
        string temp; //temp varible for swap
                
        //selction sort but instead of array your accessing the returnNode fn instead of the array
        for(int start = 0; start < (index -1) ; start++)
        {
            minIndex = head;
            maxValue = returnNode(index);
            
            for(int i = start + 1; i < size; i++)
            {
                if(returnNode(index) > maxValue)
                {
                    minValue = returnNode(index);
                    minIndex = i;
                }
            }

            temp = returnNode(maxValue);
            returnNode() = head;
            start = temp;
        }        
     //displays the sorted array from A-Z
        cout << "\n ----------------------- Sort array from Z-A";
     

    }

    template <typename T>
    ListNode LinkedList<T>:: returnNode(int index)
    {
        //return node at specific position
        ListNode* traverseList = head;
        
        //iterates num time of index
        //start at postion 0, just like an array
        for(int temp = 0; temp < index; temp++)
        {
            //setting ptr equal to next item in list
            traverseList = traverseList->next;
        }
        
        
        return traverseList;
         
    }   displayList();
    }
};
#endif