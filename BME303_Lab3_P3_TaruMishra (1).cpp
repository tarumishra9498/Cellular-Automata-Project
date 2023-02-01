/*
Created by Taru Mishra, tm36775, Unique Number: 15395
BME303_Lab3_P3_TaruMishra.cpp
Date: 09-26-22
Problem 3: This program will create a recursive function called PrintNumPattern
When given a positive integer as an input, it will subtract another positive integer
until a negative number is reached and then they will add the second integer
 inputted by the user until the first integer is reached again.
 */

#include <iostream> //Indicates that the header library should be included
using namespace std; //Tells to use a standard namespace convention

void printNumPattern(int num1,int num2) {
    //A void function is created that does not return any values, but instead outputs a statement
    //The void function takes in two arguments called int num1 and int num2
    //The name of the void function is printNumPattern
    cout << num1 << " "; //The first statement outputs the number 1 that was given
    if (num1 < 0){
        //If statement checks to see if a certain condition is true
        //Once num1 is less than zero, the program will have a blank return and then the number will be added again
       return; //blank return changes the increase from the negative number once it is reached
    }
    printNumPattern((num1-num2), num2);//
    //For the function, the recursive statement will output the first number subtracted by the second number
    //The recursive function will print for each new n value subtracted from the initial
    cout<< num1 << " "; //outputs the num1 using the recursive function for each altered value
}

int main() { //Int main function code begins
//USER INPUT X
    cout << "Enter positive integer (number 1)" << endl; //Outputs to the user to enter the first number
    int x; //Initializes integer called 'x'
    cin >> x; //Stores the integer entered in variable x using the cin operator

    if (x < 0){ //If statement checks to see if the condition that x is less than 0 is true
        cout << "There was an error.Please enter a valid positive integer." << endl; // If so, it will output that there is an invalid input
        return 1; //Return 1 will stop the program
    }
    else if (cin.fail()){ //Else if statement cheks to see if there was a cin.fail, or an integer was not entered.
        cout << "There was an error. Please enter a valid positive integer."; // If so, it will output that there is an invalid input
        return 1; //Return 1 will stop the program
    }
//USER INPUT Y
    cout << "Enter positive integer (number 2)" << endl; //Outputs to the user to enter the second number
    int y; //Initializes integer called 'y'
    cin >> y; //Stores the integer entered in variable y using the cin operator

    if (x < 0){ //If statement checks to see if the condition that y is less than 0 is true
        cout << "There was an error.Please enter a valid positive integer." << endl; // If so, it will output that there is an invalid input
        return 1; //Return 1 will stop the program
    }
    else if (cin.fail()){ //Else if statement cheks to see if there was a cin.fail, or an integer was not entered.
        cout << "There was an error. Please enter a valid positive integer."; // If so, it will output that there is an invalid input
        return 1; //Return 1 will stop the program
    }

//CALL FUNCTION
    printNumPattern(x, y); //Calls the void function PrintNumPatter
    //Sets the arguments of the printNumPattern to be variables x and y
    return 0; //Returns 0 when the program has run successfully
    } //Closes int main code

