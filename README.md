# Zoo Animals
************The Animal Zoo************
A program to access the information about the zoo, including the animals, their name, age, height and food they eat. You will be able to add and remove animals in the zoo while also organizing the data in the zoo. 

---------This program should include---------

Driver:
- contains all classes used, have proper accessibility, user inputs, and ends without crashing

A class for:
1) Zoo animals
    -contains animal name, age, height and food

2) Linked list 
    -private data:
        -head (and tail) list node pointers
        -size (optional)
    -public functions:
        -add to the list
        -get from the list
        -remove from the list
    -public "friend" functions:
        -some sorting functions
        -stream operator functions 

3) Smart Pointer (idk prevents the memory from leaking *insert griddy*)
    -private data: 
        -pointer to the data of the template type
    -public functions:
        -assignment of the pointer 
        -use the pointer? 
        -comparison operator 
        -destructor 

Test Case:
-includes a test of every possible path of the program, and samples user input