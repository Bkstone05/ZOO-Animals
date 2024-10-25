


#ifndef LinkedList_H
#define LinkedList_H

#include "Zoo.h"
#include <iostream>
using namespace std; 

    template <class T>
    struct ListNode
    {
        T data; //stores data in the node
        ListNode* next; //pointer to next node

        //constructor
        ListNode(const T& e= T(), ListNide *n = NULL)
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
    LinkedList() 
    {
        ListNode<T>::ListNode() ;
        head(new ListNode<T>(T()));
        tail(new ListNode<T>(T())); 
    }

    /*********************************
     * Destructor
     ********************************/
    template <class T>
    ~LinkedList()
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
     * Purpose: Insert a Node at given position
     *************************************************************/
    template <class T>
    void insertNode()
    {

    }
    
    /**************************************************************
     * Name: deleteNode
     * Parameters: int position -index to get deleted
     * Purpose: Removes/deletes a specified index in list 
     *************************************************************/
    template <class T>
    void deleteNode(int position);

    /**************************************************************
     * Name: displayList
     * Parameters: None
     * Purpose: Will display the linked list to screen 
     *************************************************************/
    template <class T>
    void displayList() const; 

    /**************************************************************
     * Name: isEmpty
     * Parameters: None
     * Purpose: Checks if list is empty 
     *************************************************************/
    template <class T>
    bool isEmpty()
    {
        return first() == NULL; //if true list is empty 
    }
        
    /**************************************************************
     * Name: find()
     * Parameters: UNSURE
     * Purpose: Finds a specified node and returns it 
     *************************************************************/
    template <class T>
    ListNode<T>* find()
    {

    }

    /**************************************************************
     * Name: findprevious()
     * Parameters: UNSURE
     * Purpose: Finds the node before
     *************************************************************/
    template <class T>
    ListNode<T>* find()
    {

    }


    /**************************************************************
     * Name: first
     * Parameters: None
     * Purpose: Returns first element/node in linked list 
     *************************************************************/
    template <class T>
    void first() const
    {
        return head->next;
    }

    /**************************************************************
     * Name: end 
     * Parameters: None
     * Purpose: Returns the end of the list  
     *************************************************************/
    template <class T>
    void end() const
    {

    }

    /*************************************************************************
     * Name: sortAZ
     * Parameters: UNSUREEEEE
     * Purpose: Sorts the Linked List from A-Z (forwards) using 
     ************************************************************************/
    template <class T>
    void sortAZ()
    {

    }

    /************************************************************************
     * Name: sortZA
     * Parameters: UNSUREEEE
     * Purpose: Sorts the Linked List from Z-A (backwards) using 
     ***********************************************************************/
    template <class T>
    void sortZA()
    {

    }
};
#endif