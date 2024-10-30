/*
    FILE NAME:  Driver. cpp
    PURPOSE: Main program         

*/

#include "Zoo.h"
#include "LinkedList.h"
#include "Food.h"

void getInitialAnimals(LinkedList<Animal>);
void printAnimal(string, LinkedList<Animal>);
void newAnimal( LinkedList<Animal>);

int main()
{
    string temp, name, displayA, nameA; 
    int choice, aOrZ;
    ifstream test; 
    LinkedList<Animal> zoo;
    
    test.open("Test.txt");

    //intro and start up info
    cout << "\nPlease enter in your name:  ";
    getline(cin, name);
    cout << "\nThank you " << name;

    cout << "\nPortal is loading.......";
    getInitialAnimals(zoo);    
    cout << "\n\nWelcome " << name << " to \n";
    cout << "____  _  _  ____    ____  _  _   __   _  _  ____ " << endl;
    cout << "(_  _)/ )( \\(  __) / ___)/ )( \\ / _\\ ( \\/ )(  _ \\" << endl;
    cout << ")(  ) __ ( ) _)   \\___ \\\\ /\\ //    \\/ \\/ \\ ) __/" << endl;
    cout << "(__) \\_)(_/(____)  (____/(_/\\_)\\_/\\_/\\_)(_/(__)  " << endl;
    cout << "\n\nCurrent Animals in the zoo!";
    
    //call display list function here and pre sort (a-z)

    
   //menu made through using a switch case
    do{

        //ask user what choice they would like to make
        cout << "\n\nSelect what choice you would like to make below:  ";
        cout << "\n1. Print out a specified animal";
        cout << "\n2. Sort and Print animals";
        cout << "\n3.Add animal";
        cout << "\n4.Delete animal";
        cout << "\n5.Exit "; 

        getline(test, temp, '%');        
        choice = stoi(temp);  

        if(choice > 5 || choice < 1)
        {
            cout << "Please enter in a valid choice!!" << endl;
            getline(test, temp, '%');        
            choice = stoi(temp);
        }

        switch (choice)
        {
            case 1:
                cout << "What animal would you like to display? ";
                getline(test, displayA, '%');
                printAnimal(displayA, zoo);
                break;
            
            case 2:
                cout << "How would you like to sort the animals?\n";
                cout << "If you would like it to be sorted A-Z, select 1. If you would like it sorted Z-A, select 2.";
                getline(test, temp, '%');
                aOrZ = stoi(temp);
                while(aOrZ < 1 || aOrZ > 2)
                {
                    cout << "\nIncorrect choice please try again!\n";
                    getline(test, temp, '%');
                    aOrZ = stoi(temp);
                }
                if(aOrZ == 1)
                    zoo.sortAZ(zoo); //needs parameters
                else
                    zoo.sortZA(zoo); //needs parameters
                break;

            case 3:
                //call add animal (insert node func) function --> read in from file then place into node
                newAnimal(zoo);
                break;

            case 4:   
                cout << "Please enter the name of the animal you would like to delete:  ";
                getline(test, nameA, '%');
                zoo.deleteNode(nameA);
                break;     
        }

    }while(choice !=5);

    test.close(); 

    cout << "Thank you, " << name << " for your hard work today at " << endl; 
    cout << "____  _  _  ____    ____  _  _   __   _  _  ____ " << endl;
    cout << "(_  _)/ )( \\(  __) / ___)/ )( \\ / _\\ ( \\/ )(  _ \\" << endl;
    cout << ")(  ) __ ( ) _)   \\___ \\\\ /\\ //    \\/ \\/ \\ ) __/" << endl;
    cout << "(__) \\_)(_/(____)  (____/(_/\\_)\\_/\\_/\\_)(_/(__)  " << endl;
    cout << "Unfortunately, Shrek (the owner) has said \"Get Out Of MY Swap\"";
    return 0;
}