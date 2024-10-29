//food class all functions

    #include "Food.h"
    //All Setters 
    void Food::setMeals(string meals)
    {
        this->meals = meals; 
    }
    void Food::setSnacks(string snack)
    {
        this->snack = snack;
    }
    void Food::setNumOfMeals(int numOfMeals)
    {
        this->numOfMeals = numOfMeals; 
    }

    //getters
    string Food::getMeals() const
    {
        return this->meals;
    }
    string Food::getSnacks() const
    {
        return this->snack;
    }
    int Food::getNumOfMeals() const
    {
        return this->numOfMeals;
    }


    //other functions used 
    void Food::printFood() const
    {
        cout << setw(15) << left << "\nMeals: " << right <<  getMeals();
        cout << setw(15) << left << "\nSnacks: " << right <<  getSnacks();    
        cout << setw(15) << left << "\nNumber of Meals in day: " << right <<  getNumOfMeals();  
    }