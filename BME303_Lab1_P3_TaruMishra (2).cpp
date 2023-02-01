/*
Created by Taru Mishra, tm36775, Unique Number: 15395
BME303_Lab1_P1_TaruMishra.cpp
Date: 09-05-22
Problem 3: This Program will calculate the BMI of a person using input of their height and weight.
*/


#include <iostream> //Indicates that the header library should be included
using namespace std; //Tells to use a standard namespace



int main() { //Holds the main function that performs the commands, return a status to the operating system

    //INTRODUCTION
    cout << "Hello. This program will be calculating your BMI, taking in your height and weight." << endl; //Cout prints commands/statements to the screen for the user
    cout << "     " << endl;

    //HEIGHT
    cout << "Enter your height in inches as an integer:  " << endl; //Cout operator includes a command to enter the height from the user
    int height; //Height is initialized to later be taken in from the user
    cin >> height; //Cin operator is implemented to store value of the height from the user

    //WEIGHT
    cout << "Enter your weight in pounds as an integer:  "<< endl;
    int weight; //Weight variable is initialized as an integer value.
    cin >> weight; //Cin operator stores weight as an integer specifically, like height.

    //BMI
    int BMI; //BMI calculation as an integer is initialized
    BMI = (703 * weight) / (height * height); //Arithmetic operators calculate BMI while maintaining the "int" variable

    //OUTPUT
    //The values of the height, weight, and calculated BMI are outputted to the user using the "cout" operator
    cout << "Height: " << height << " inches " << endl; //Outputs the entered height value
    cout << "Weight: " << weight << " pounds" << endl;  //Outputs the entered weight value
    cout << "BMI: " << BMI << " inches/lbs^2" << endl ;  //Outputs the calculated BMI Value


    return 0; //Returns a value of zero to reveal whether or not the program has run successfully.


} //Closing brace ends int main code
