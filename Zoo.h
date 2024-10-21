/*********************
 * Name: Zoo.h 
 * Purpose: 
 * Author:
 */

#include <iomanip>
#include <iostream>
#include <string>
using namespace std; 

#ifndef Zoo_H
#define Zoo_H

class Animal
{
    private:
    //variables
    string name, food;
    int age;
    float weight;

    public:
    //Constructors
    Animal()
    {
        this->name = " ";
        this->food = " ";
        this->age = 0;
        this->weight = 0;
    }

    Animal(string name, string food, int age, float weight)
     {
        this->name = name;
        this->food = food;
        this->age = age;
        this->weight = weight;
     }

     //setters
     void setName(string name);
     void setFood(string food);
     void setAge(int age);
     void setWeight(int weight);

     //getters
     string getName() const;
     string getFood() const;
     int getAge() const;
     float getWeight() const; 

     //other functions used 
     void printAnimal()  const;


     ~Animal()
     {
        cout << "This animal has passed away";
     }
};


#endif
