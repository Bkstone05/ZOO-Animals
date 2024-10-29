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
     CLEAR
     * Constructor
     ********************************/
    template<typename T> 
    LinkedList<T>::LinkedList()
    {
        head = NULL;
        tail = NULL; 
    }


    /*********************************
     CHECK???
     * Destructor
     ********************************/
    template <typename T>
    ~LinkedList()
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
     NEED FIXED
     * Name: insertNode
     * Parameters: none
     * Purpose: Inserts a new npde 
     *************************************************************/
    template <typename T>
    void LinkedList<T>::insertNode()
    {
        ListNode* newNode = new ListNode<T>(data, p->next);
        p->next = newNode; 
    }
    
    /**************************************************************
     CLEAR
     * Name: deleteNode
     * Parameters: int position -index to get deleted
     * Purpose: Removes/deletes a specified index in list 
     *************************************************************/
    template <typename t>
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
     clear
     * Name: displayList
     * Parameters: None
     * Purpose: Will display the linked list to screen 
     *************************************************************/
    template <typename t>
    void LinkedList<T>::displayList() const
    {
        ListNode* nodePtr;

        if(head != NULL)
        {
            nodePtr = head;

            while(nodePtr)
            {
                cout << nodePtr->value << endl;
                nodePtr = nodePtr->next;
            }
        }
        else{
            cout << "This Node Is Empty";
        }
    }

    /**************************************************************
     * clear
     * Name: isEmpty
     * Parameters: None
     * Purpose: Checks if list is empty 
     *************************************************************/
    template <typename t>
    bool LinkedList<T>::isEmpty()
    {
        return head == NULL; //if true list is empty 
    }
        
    /**************************************************************
     * clear
     * Name: find()
     * Parameters: UNSURE
     * Purpose: Finds a specified node and returns it 
     *************************************************************/
    template <typename t>
    ListNode<T>* LinkedList<T>::find(Animal animal)
    {
        ListNode* nodePtr;
        int position;

        nodePtr = head; 
        position = 0;

        while(nodePtr)
        {
            if(nodePtr->data.getname() == animal.getname())
                {
                    return position; 
                }
            position++;
            nodePtr = nodePtr->next;    
        }
        return -1; 
    }


    /**************************************************************
     CLEAR
     * Name: first
     * Parameters: None
     * Purpose: Returns first element/node in linked list 
     *************************************************************/
    template <typename t>
    void LinkedList<T>::first() const
    {
        return head->next;
    }

    /**************************************************************
     * clear
     * Name: end 
     * Parameters: None
     * Purpose: Returns the end of the list  
     *************************************************************/
    template <typename t>
    void LinkedList<T>::end() const
    {
        return tail;
    }

    /**************************************************************
     NEED FIXED
     * Name: PrintAnimal
     * Parameters: None
     * Purpose: Print out one node
     *************************************************************/
    template <typename t>
    void LinkedList<T>::PrintAnimal(ListNode node) const
    {
        node->data.printAnimal(); 
    }

    /*************************************************************************
     * Name: sortAZ
     * Parameters: None
     * Purpose: Sorts the Linked List from A-Z (forwards) using Selection sort
     ************************************************************************/
    template <typename t>
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


    template <typename t>
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
    template <typename t>
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

    
};
#endif