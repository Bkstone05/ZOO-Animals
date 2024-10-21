/*
    FILE NAME:  Driver. cpp
    PURPOSE: Main program         

*/


/*
    menu 
    1. sort a-z
    2. sort z-a
    3. add animal 
    4. delete animal 
    5. end program (aka shrek throws an asteroid and kills all of them)

*/
#include <iostream>
using namespace std;


int main()
{
    int choice;

    //intro and start up info



    //menu made through using a switch case
    do{

        //ask user what choice they would like to make
        cout << "\n\nSelect what choice you would like to make below:  ";
        cout << "\n1. Sort animals A-Z";
        cout << "\n2. Sort animals Z-A";
        cout << "\nAdd aniaml";
        cout << "\nDelete animal";

        getline(choice, '#');        
        choice = stoi(choice);  //user entry for number of shops they want

        switch (choice != 5)
        {
        case 1:
            /* code */
            break;
        
        default:
            break;
        }





    }    
        
        













    return 0;
}