/****************************
 * Name: Zoo.cpp
 * Purpose: Stores all functions for class Animal
 * Author:
 */

#include "Zoo.h"

//all setter definitions
void Animal::setName(string name)
{
    this->name = name;
}
void Animal::setFood(string food)
{
    this->food = food; 
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
string Animal::getFood() const
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
    cout << setw(15) << left << "\nAnimal Food: " << right <<  getFood();    
    cout << setw(15) << left << "\nAnimal Age: " << right <<  getAge();    
    cout << setw(15) << left << "\nAnimal Name: " << right <<  getWeight();    
}

