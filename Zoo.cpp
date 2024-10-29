/****************************
 * Name: Zoo.cpp
 * Purpose: Stores all functions for class Animal
 * Author:
 */

#include "Zoo.h"
#include "LinkedList.h"
#include "Food.h"

//all setter definitions
void Animal::setName(string name)
{
    this->name = name;
}
void Animal::setFood(string meals, string snacks, int numOfMeals)
{
    food.setMeals(meals);
    food.setSnacks(snacks);
    food.setNumOfMeals(numOfMeals);
}
void Animal::setAge(int age)
{
    this->age = age;
}
void Animal::setWeight(int weight)
{
    this->weight = weight;
}

//all getter definitions
string Animal::getName() const
{
    return this->name;
}
Food Animal::getFood() const
{
    return this->food;
}
int Animal::getAge() const
{
    return this->age;
}
float Animal::getWeight() const
{
    return this->weight; 
}

//all other functions used
void Animal::printAnimal() const
{
   
    cout << setw(15) << left << "\nAnimal Name: " << right <<  getName();
    cout << setw(15) << left << "\nAnimal Age: " << right <<  getAge();    
    cout << setw(15) << left << "\nAnimal Name: " << right <<  getWeight(); 
    food.printFood();   
}

 