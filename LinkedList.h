#ifndef LinkedList_H
#define LinkedList_H

#include "Zoo.h"
#include "Food.h"
#include <iostream>
using namespace std; 





template <typename T>
class LinkedList
{
    private:

    struct ListNode
    {
        T data; //stores data in the node
        ListNode* next; //pointer to next node
        
        ListNode()
        {
            data = 0;
            next = NULL;
        }
    };

    ListNode<T>* head;
    ListNode<T>* tail; 


    public: 
    LinkedList() {};
    /*********************************
     CLEAR
     * Constructor
     ********************************/
    LinkedList()
    {
        head = NULL;
        tail = NULL; 
    }


    /*********************************
     * I think good
     * Destructor
     ********************************/
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
    clear
     * Name: insertNode
     * Parameters: none
     * Purpose: Inserts a new npde 
     *************************************************************/
    void appendNode(Animal node)
    {
        ListNode<T>* newNode;

        newNode = new ListNode;
        newNode->data = node;
        newNode->next = NULL;

        if(!head)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        
    }
    
    /**************************************************************
     CLEAR
     * Name: deleteNode
     * Parameters: int position -index to get deleted
     * Purpose: Removes/deletes a specified index in list 
     *************************************************************/
    void deleteNode(string name)
    {
        ListNode<T>* nodePtr;
        ListNode<T>* prevNode;

        //If List is Empty STOP
        if(!head)
        {
            return;
        }
        //Determine if deleting first node
        if(head->data.getName() == name)
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
    void displayList() const
    {
        ListNode<T>* nodePtr;

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
    bool isEmpty()
    {
        return head == NULL; //if true list is empty 
    }
        
    /**************************************************************
     * clear
     * Name: find()
     * Parameters: UNSURE
     * Purpose: Finds a specified node and returns it 
     *************************************************************/
    int find(string tempData)
    {
        ListNode<T>* nodePtr;
        int position;

        nodePtr = head; 
        position = 0;

        while(nodePtr)
        {
            if(nodePtr->data.getname() == tempData)
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
    void first() const
    {
        return head->next;
    }

    /**************************************************************
     * clear
     * Name: end 
     * Parameters: None
     * Purpose: Returns the end of the list  
     *************************************************************/
    void end() const
    {
        return tail;
    }

    /**************************************************************
     clear
     * Name: PrintAnimal
     * Parameters: None
     * Purpose: Print out one node
     *************************************************************/
    void printAnimal(int index) const
    {
        int counter = 0;
        ListNode<T>* nodePtr;
        nodePtr = head;

        while(nodePtr)
        {
            if(counter == index)
            {
                nodePtr->data.printAnimal();
                return;
            }
            counter++; 
        }

        cout << "Could Not Find Animal To Print";

    }

    /*************************************************************************
     * Name: sortAZ
     * Parameters: None
     * Purpose: Sorts the Linked List from A-Z (forwards) using Selection sort
     ************************************************************************/
    void sortAZ(LinkedList zoo)
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
        cout << "----------------------Sorted A-Z";
        zoo.displayList();
    }

    ListNode returnNode(int index)
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
    * Purpose: Sorts the Linked List from Z-A (backwards) using selection sort
     ***********************************************************************/
    void sortZA(LinkedList zoo)
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
        zoo.displayList(); 

    }

    
};
#endif