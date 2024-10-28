/*
    FILE NAME: Funtions.cpp

    PURPOSE: Conatains all of the funcntions that are called within the Driver.cpp files       
*/
#include "Zoo.h"
#include "LinkedList.h"

void getInitialAnimals(LinkedList<ListNode<Animal>> zoo)
{
    string name, food, temp; 
    int age; 
    float weight;
    ifstream test; 

    test.open("test.txt");

    if(test.is_open())
    {
        for(int i=0; i < 5; i++ )//starting with 5 animals 
        {
            //gathering information 
            getline(test, name, '%');
            getline(test, food, '%');
            getline(test, temp, '%');
            age = stoi(temp);
            getline(test, temp, '%');
            weight = stoi(temp);

            Animal temp2(name, food, age, weight);

            ListNode<Animal> temp3(temp2); 

            zoo.insertNode(); //IDK WHY NO WORK PLEASE HELP 
    }
    }

    test.close(); 
}


void printAnimal(string displayA, LinkedList<ListNode<Animal>> zoo)
{
    if(zoo.isEmpty()) //checks if list is empty
    {
        cout << "List is empty!!";
    }
    else 
    {
       
    }
}
