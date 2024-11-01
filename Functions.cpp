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

    test.open("Test.txt");
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
            zoo.appendNode(temp2, zoo); //IDK WHY NO WORK PLEASE HELP 
        }

    }


}

//Needs to be done 
void printAnimal(string displayA, LinkedList<Animal> zoo)
{
    ifstream test;
    int index;

        if(zoo.isEmpty()) //checks if list is empty
            cout << "List is empty!!";

    test.open("Test.txt");

    if(test.is_open())
    {
        
        index = zoo.find(displayA);
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
    zoo.appendNode(temp2, zoo);
}
