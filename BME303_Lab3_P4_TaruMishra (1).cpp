/*
Created by Taru Mishra, tm36775, Unique Number: 15395
BME303_Lab3_P4_TaruMishra.cpp
Date: 09-26-22
Problem 4: This program will Define a function named SwapValue that takes in 4 integers as parameters.
 The function will swap the first value with the second and the third with the fourth.
The main function will output the swapped values
 */

#include <iostream> //Indicates that the header library should be included
using namespace std; //Tells to use a standard namespace convention

void SwapValues(int&userVal1, int&userVal2, int&userVal3,int&userVal4){ //Void function is created that does not return any values called SwapValues
    //The function takes in 4 user values. They are stored as int& because to ensure that there is a varaiable scope in the int main function as well
    //Therefore, the inputs in later functions will pass on the variables
    int x = userVal1; //Sets and calls x integer to userVal1
    int y = userVal2; //Sets and calls y integer to userVal2
    int z = userVal3; //Sets and calls z integer to userVal3
    int v = userVal4; //Sets and calls v integer to userVal4

  //SWAPPING VALUES
    userVal1 = y; //Sets userVal1 to the y variable
    userVal2 = x; //Sets userVal2 to the x variable
    userVal3 = v; //Sets userVal3 to the v variable
    userVal4 = z; //Sets userVal3 to the z variable
} //Closing braces end int main function

int main() { //Main function carries out the output for this program
    cout<< "Enter 4 integers (separate all integers by a space after the first one): " << endl; //COUT asks user to enter 4 integer numbers
    int A; int B; int C; int D; //Stores all four integers in int variables
    if (cin.fail()){ //If statement uses cin.fail operator to check if a condition is true
        //In this case, the following code will execute if the user input is invalid
        cout << "There was an error in input. Please make sure you enter 4 integers"; //There will be an output of invalid input
        return (1); //Return 1 will exit the main function and stop the program in case of error
    }
    cin >> A >> B>> C >> D ; //If no error is present, all values will be stored in variables A-D
    SwapValues(A,B,C,D); //The SwapValue function is called that swaps all the variables entered with one another
    cout << A << " " << B << " " << C << " " << D; // Outputs the new swapped values using COUT operator after the function performs the swapping
} //Closing braces end the int main code
