/*
    FILE NAME:  Driver. cpp
    PURPOSE: Main program         

*/

#include "Zoo.h"
#include "LinkedList.h"

void getInitialAnimals(LinkedList<ListNode<Animal>>);

int main()
{
    string temp, name; 
    int choice, aOrZ;
    ifstream test; 
    LinkedList<ListNode<Animal>> zoo; 


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

        getline(test, temp, '#');        
        choice = stoi(temp);  

        switch (choice)
        {
        case 1:
            
            break;
        
        case 2:
            cout << "How would you like to sort the animals?\n";
            cout << "If you would like it to be sorted A-Z, select 1. If you would like it sorted Z-A, select 2.";
            getline(test, temp, '%');
            aOrZ = stoi(temp);
            while()//finish validaitng input
            if(aOrZ == 1)
            zoo.sortAZ(zoo);
            else
            zoo.sortZA(zoo);
            break;

        case 3:
            break;

        case 4:   
            //call deconstructors
            break;     
        }





    }while(choice !=5);

    return 0;
}