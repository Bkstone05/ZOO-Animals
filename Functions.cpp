/*
    FILE NAME: Funtions.cpp

    PURPOSE: Conatains all of the funcntions that are called within the Driver.cpp files       
*/
#include "Zoo.h"
#include "LinkedList.h"
#include "Food.h"

void getInitialAnimals(LinkedList<Animal> zoo)
{
    string name, meals, snack, temp; 
    int age, numMeals; 
    float weight;
    ifstream test; 

    test.open("test.txt");

    if(test.is_open())
    {
        for(int i=0; i < 5; i++ )//starting with 5 animals 
        {
            //gathering information 
            getline(test, name, '%');
            getline(test, temp, '%');
            age = stoi(temp);
            getline(test, temp, '%');
            weight = stoi(temp);
            getline(test, meals, '%');
            getline(test, snack, '%');
            getline(test, temp, '%');
            numMeals = stoi(temp);

            Animal temp2(name, meals, snack, numMeals, age, weight);
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
    string name;
    int index;

        if(zoo.isEmpty()) //checks if list is empty
            cout << "List is empty!!";

    test.open("Test.txt");

    if(test.is_open())
    {
        
        cout << "List is empty!!";
        cout << "Please enter in the index of animal you are wanting to see: ";
        getline(test, name, '%');
        index = zoo.find(name);
        zoo.printAnimal(index); 
    }
}

void newAnimal( LinkedList<Animal> zoo)
{
    string name, meals, snack, temp; 
    int age, numMeals; 
    float weight;
    ifstream test; 

    test.open("Test.txt");
    
    if(test.is_open())
    {
        getline(test, name, '%');
        getline(test, temp, '%');
        age = stoi(temp);
        getline(test, temp, '%');
        weight = stoi(temp);
        getline(test, meals, '%');
        getline(test, snack, '%');
        getline(test, temp, '%');
        numMeals = stoi(temp);
    }
    
    Animal temp2(name, meals, snack, numMeals, age, weight);
    zoo.insertNode(temp2);
}
