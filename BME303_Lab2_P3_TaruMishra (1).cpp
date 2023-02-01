/*
Created by Taru Mishra, tm36775, Unique Number: 15395
BME303_Lab2_P2_TaruMishra.cpp
Date: 09-17-22
Problem 3: This Program will convert a number into binary form
It will output strings of 1s and 0s representing the integer in reverse binary
*/

#include <iostream> //Indicates that the header library should be included


using namespace std; //Tells to computer to use a standard namespace convention


int main() { //Holds the main function that performs the commands, return a status to the operating system
    cout << "Enter a positive integer" << endl; //Outputs task to the user to enter a positive integer
    int n; //Initializes integer n which will later be stored by the user
    cin>> n; //Cin operator stores the integer entered by the user in n

    //If statement will stop code if the user does not enter a valid output
    if (cin.fail() || n <0){ //Cin fail operator checks the condition to see if the input was invalid or it is not a positive number using || or operator for n is less than 0
        cout<< "An error has ocurred. A valid integer was not entered. Please make sure you enter a positive integer only. " << endl;
        //If the condition that the input was invalid is true, then COUT will output that the integer is not valid
        return 1; //Return 1 will exit the main function and stop the program.
    }

    int r; //initializes integer r which will later be recalled as the remainder

    //While performs and outputs a task while a certain condition is true
    while (n > 0.5){ //The while will execute as long as the n value is positive and more than 0.5
        //While will stop once n equals 0.5 because that is when the binary is translation is stopped
        r = n%2; //r is defined as the remainder of n divided by 2 using %, the modulus operator.
        n = n/2; //As long as n is less than 1/2, n will half itself. The while loop will be repeated and the remainder will be calculated for each n.
        cout << r ; // The value of r for each halved n will be calculated and outputed in a line, as binary numbers are displayed, using the COUT operator.
        //Because the first r is displayed before then being halved, the output is occuring in reverse binary.
        }
        return 0; //Returns a value of zero to reveal whether or not the program has run successfully.

}//Closing brace ends int main code







