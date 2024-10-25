/*
    FILE NAME:  Driver. cpp
    PURPOSE: Main program         

*/

#include "Zoo.h"


int main()
{
    string temp, name; 
    int choice;
    ifstream infile; 


    //intro and start up info
    cout << "\nPlease enter in your name:  ";
    getline(cin, name);
    cout << "\nThank you " << name;

    cout << "\nPortal is loading.......";
    cout << "\n\nWelcome " << name << " to the\n";
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

        getline(infile, temp, '#');        
        choice = stoi(temp);  

        switch (choice)
        {
        case 1:
            
            break;
        
        case 2:
            break;

        case 3:
            break;

        case 4:    
            break;     
        }





    }while(choice !=5);

    return 0;
}