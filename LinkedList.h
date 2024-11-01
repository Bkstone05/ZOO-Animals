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

    template <typename t> 
    struct ListNode
    {
        T data; //stores data in the node
        ListNode* next; //pointer to next node
        
        ListNode()
        {
            data;
            next = NULL;
        }
    };

    ListNode<T>* head;
    ListNode<T>* tail; 


    public: 
    LinkedList() {};


    /*********************************
     * I think good
     * Destructor
     ********************************/
    ~LinkedList()
    {
        while(!isEmpty())
        {
            ListNode<T>* temp;
            ListNode<T>* tempT;
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
     * Name: appendNode
     * Parameters: none
     * Purpose: Inserts a new node 
     *************************************************************/
    void appendNode(T node, LinkedList zoo)
    {
        
        ListNode<T>* newNode;

        newNode = new ListNode<T>;
        newNode->data = node;
        newNode->next = NULL;

        cout << "The Program makes it here need help getting it to go further!";
        if(!head)
        {
            head = newNode;
            tail = newNode;
            cout << "here";
        }
        else   
        {
            tail->next = newNode;
            tail = newNode; 
            cout << "uhh";
        }
    }

    void insertNode(int pos, ListNode<T> node)
    {
        ListNode<T> *nodePtr;
        ListNode<T> *newNode;

        newNode = new ListNode<T>;
        newNode->data = node.data;

        if(!head)
        {
            if(pos != 0)
            {
                cout << "\n\nUnable to insert a node at positon " << pos;
            
            }
            head = newNode;
            tail = newNode;
        }
        else
        {
            nodePtr = head;
            int nodeCount = 0;
            if(pos == 0)
            {
                newNode->next = head;
                head = newNode;
            }
            else
            {
                while(nodePtr != tail && nodeCount < pos)
                {
                    nodeCount++;
                    if(nodeCount == pos)
                    {
                        break;
                    }
                    nodePtr = nodePtr->next;
                }

                if(nodePtr->next == NULL)
                {
                    tail = newNode;
                }
                newNode->next = nodePtr->next;
                nodePtr->next = newNode; 
            }
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
                tail = prevNode;
            }
            prevNode->next = nodePtr->next;
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
            if(nodePtr->data.getName() == tempData)
                {
                    return position; 
                }
            position++;
            nodePtr = nodePtr->next;    
        }
        return -1; 
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
     * Name: counter
     * Parameters: None
     * Purpose: counts the index for the linked list
     ************************************************************************/
    int counter(LinkedList zoo)
    {
        int counter = 0;
        ListNode<T>* nodePtr; 

        nodePtr = head; 

        while(nodePtr != tail)
        {
            counter++; 
            nodePtr = nodePtr->next;
            if(nodePtr == tail)
            {
                counter++;
            }
        }
        return counter;
    }
    string getNodeName(int position)
    {
        ListNode<T>* nodePtr;
        int curPos = 0;
        if(!head)
        {
            return " ";
        }
        else
        {
            if(position == 0)
            {
                return head->data.getName();
            }
            nodePtr = head;
            while(position >= curPos)
            {
                if(position ==0)
                {
                    return nodePtr->data.getName();
                }
                curPos++;
                nodePtr = nodePtr->next;
            }
            
        }
        return " ";
        
    }
    void SortAZ(LinkedList zoo)
    {
        ListNode<T> tempNode; 
        string temp; 
        int j;
        char key;

        for(int i = 1; i < zoo.counter(zoo); i++)
        {
            temp = zoo.getNodeName(i);
            key = temp.at(0);
            j = i-1;
            while(j >=0 && temp.at(0) > key)
            {
                j = j-1;
            }
            zoo.deleteNode(tempNode.data.getName());
            zoo.insertNode(j+1, tempNode);
        }
    }

    void SortZA(LinkedList zoo)
    {
        ListNode<T> tempNode; 
        string temp; 
        int j;
        char key;

        for(int i = 1; i < zoo.counter(zoo); i++)
        {
            temp = zoo.getNodeName(i);
            key = temp.at(0);
            j = i-1;
            while(j >=0 && temp.at(0) < key)
            {
                j = j-1;
            }
            zoo.deleteNode(tempNode.data.getName());
            zoo.insertNode(j+1, tempNode);
        }
    }
    
};
#endif