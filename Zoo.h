/*********************
 * Name: Zoo.h 
 * Purpose: 
 * Author:
 ******************/


#ifndef Zoo_H
#define Zoo_H

#include <iomanip>
#include <iostream>
#include <string>
#include <fstream> 
using namespace std; 

#include "LinkedList.h"
#include "Food.h"

class Animal
{
    private:
    //variables
    string name;
    Food food; 
    int age;
    float weight;

    public:
    //Constructors
    Animal()
    {
        this->name = " ";
        this->food.setSnacks(" ");
        this->food.setMeals(" ");
        this->food.setNumOfMeals(0);
        this->age = 0;
        this->weight = 0;
    }
   //overloaded constructors
    Animal(string name, string meals, string snacks, int numOfMeals, int age, float weight)
     {
        this->name = name;
        this->food.setMeals(meals);
        this->food.setSnacks(snacks);
        this->food.setNumOfMeals(numOfMeals);
        this->age = age;
        this->weight = weight;
     }

     //setters
     void setName(string name);
     void setFood(string meals, string snacks, int numOfMeals);
     void setAge(int age);
     void setWeight(int weight);

     //getters
     string getName() const;
     Food getFood() const;
     int getAge() const;
     float getWeight() const; 

     //other functions used 
     void printAnimal() const;

   //deconstructor *ded*
     ~Animal()
     {
         cout << "This animal has passed away" << endl;
     }
};


#endif
