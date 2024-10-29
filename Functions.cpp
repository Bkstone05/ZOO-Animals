/*
    FILE NAME: Funtions.cpp

    PURPOSE: Conatains all of the funcntions that are called within the Driver.cpp files       
*/
#include "Zoo.h"
#include "LinkedList.h"
#include "Food.h"

void getInitialAnimals(LinkedList<Animal> zoo)
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
            zoo.insertNode(temp2); //IDK WHY NO WORK PLEASE HELP 
    }
    
    }

    test.close(); 
}

//Needs to be done 
void printAnimal(string displayA, LinkedList<Animal> zoo)
{
    string temp;
    ifstream test;
    int index; 

        if(zoo.isEmpty()) //checks if list is empty
            cout << "List is empty!!";

    test.open("Test.txt");

    if(test.is_open())
    {
        
        cout << "List is empty!!";
        cout << "Please enter in the index of animal you are wanting to see: ";
        getline(test, temp, '%');   
        index = stoi(temp);    
    }
}
