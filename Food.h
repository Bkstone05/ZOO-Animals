/*********************
 * Name: Food.h
 * Purpose: 
 * Author: Baylee Stone
 ******************/


#ifndef Food_H
#define Food_H

#include <iomanip>
#include <iostream>
#include <string>
#include <fstream> 
using namespace std; 

class Food
{
    private:
    //variables
    string meals, snack;
    int numOfMeals; 

    public:
    //Constructors
    Food()
    {
        this->meals = " ";
        this->snack = " ";
        this->numOfMeals = 0; 
    }
   //overloaded constructors
    Food(string meals, string snack, int numOfMeals)
     {
        this->meals = meals;
        this->snack = snack;
        this->numOfMeals = numOfMeals;
     }

     //setters
     void setMeals(string meals);
     void setSnacks(string snack);
     void setNumOfMeals(int numOfMeals);

     //getters
     string getMeals() const;
     string getSnacks() const;
     int getNumOfMeals() const;


     //other functions used 
     void printFood() const;

   //deconstructor Ate
     ~Food()
     {
         cout << "This food has been consumed" << endl;
     }
};


#endif
