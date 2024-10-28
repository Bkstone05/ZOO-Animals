#ifndef LinkedList_H
#define LinkedList_H

#include "Zoo.h"
#include <iostream>
using namespace std; 

void deleteNode();

    template <class T>
    struct ListNode
    {
        T data; //stores data in the node
        ListNode* next; //pointer to next node

        //constructor
        ListNode(const T& e= T(), ListNode *n = NULL)
        {
            data(e);
            next(n);
        }
    };
     

template <class T>
class LinkedList
{
    private:
    ListNode<T> *head;
    ListNode<T> *tail; 

    public: 
    /*********************************
     * Constructor
     ********************************/
    template <class T>
    LinkedList<T>::LinkedList() 
    {
        ListNode<T>::ListNode() :
        head(new ListNode<T>(T())) {};
        tail(new ListNode<T>(T())) {}; 
    }

    /*********************************
     * Destructor
     ********************************/
    template <class T>
    LinkedList<T>::~LinkedList()
    {
        while(!isEmpty())
        {
            ListNode<T>* temp = first();
            ListNode<T>* tempT = end();
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
    template <class T>
    void LinkedList<T>::insertNode(T& data, ListNode<T>* p)
    {
        ListNode<T>* newNode = new ListNode<T>(data, p->next);
        p->next = newNode; 
    }
    
    /**************************************************************
     * Name: deleteNode
     * Parameters: int position -index to get deleted
     * Purpose: Removes/deletes a specified index in list 
     *************************************************************/
    template <class T>
    void LinkedList<T>::deleteNode(T& data)
    {
        ListNode<T>* p = findPrevious(data);

        if(p)
        {
            ListNode<T>* temp = p->next;
            p->next = temp->next;
            delete temp; 
        }
    }

    /**************************************************************
     * Name: displayList
     * Parameters: None
     * Purpose: Will display the linked list to screen 
     *************************************************************/
    template <class T>
    void LinkedList<T>::displayList() const
    {
        const ListNode<T>* p = first();
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
    template <class T>
    bool LinkedList<T>::isEmpty()
    {
        return first() == NULL; //if true list is empty 
    }
        
    /**************************************************************
     * Name: find()
     * Parameters: UNSURE
     * Purpose: Finds a specified node and returns it 
     *************************************************************/
    template <class T>
    ListNode<T>* LinkedList<T>::find()
    {

    }

    /**************************************************************
     * Name: findprevious()
     * Parameters: UNSURE
     * Purpose: Finds the node before
     *************************************************************/
    template <class T>
    ListNode<T>* LinkedList<T>::findPrevious()
    {

    }


    /**************************************************************
     * Name: first
     * Parameters: None
     * Purpose: Returns first element/node in linked list 
     *************************************************************/
    template <class T>
    void LinkedList<T>::first() const
    {
        return head->next;
    }

    /**************************************************************
     * Name: end 
     * Parameters: None
     * Purpose: Returns the end of the list  
     *************************************************************/
    template <class T>
    void LinkedList<T>::end() const
    {
        return end -> next;
    }

    /*************************************************************************
     * Name: sortAZ
     * Parameters: UNSUREEEEE
     * Purpose: Sorts the Linked List from A-Z (forwards) using bubble sort
     ************************************************************************/
    template <class T>

    void LinkedList<T>::sortAZ(int *arr, int size)
    {
        int tempForSwap;
        cout << "\nSorting the array with the Bubble Sort algorithm.\n\n";
        //maxElement will hold the subscript of the last element 
        //that is to be compared to its immediate neighbor
        for(int maxElement=(size-1); maxElement > 0; maxElement--)
        {
            for(int i=0; i<maxElement; i++) //using i for "index"
            {
                //swap the two adjacent elements if the one on the left is greater than the one on the right
                if(arr[i] > arr[i+1]) 
                {
                    tempForSwap = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = tempForSwap;
                }
            }
        }

        //displays the sorted array from A-Z
        cout << "\n ----------------------- Sort array from A-Z";
        displayList();
    }

    /************************************************************************
     * Name: sortZA
     * Parameters: UNSUREEEE
     * Purpose: Sorts the Linked List from Z-A (backwards) using 
     ***********************************************************************/
    template <class T>
    void LinkedList<T>::sortZA()
    {
        
        //displays the sorted array from A-Z
        cout << "\n ----------------------- Sort array from Z-A";
        displayList();
    }
};
#endif