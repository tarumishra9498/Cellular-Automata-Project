/*
Created by Taru Mishra, tm36775, Unique Number: 15395
BME303_Lab3_P1_TaruMishra.cpp
Date: 09-26-22
Problem 3:
Write a program to reverse a string. Input is a string from the user
 the output is to string the string in reverse."*/

#include <iostream> //Indicates that the header library should be included
#include <iomanip> //Inlcudes the iomanip, setw library
#include <string> //Includes the string library
using namespace std; //Sets the namespace to be standard


int main() { //Open brackets begin the int main function

cout << "Please enter a string" << endl; //Output asks user to enter string
string myString; //string called myString is initialized
getline(cin,myString); //Geline operator stores user input in string

char* myPointer = &myString[0]; //Character pointer is created that stores elements of string into pointer array
for (int i = myString.length()- 1 ; i >= 0; i --){
    //For loop created with the conditions that 'i' is less than the string length
    //Prints the elemnts of string in reverse starting from the last element and decrementing till 0
    cout << myPointer[i]; } //Outputs the elements of the character in reverse, starting from last index
    return 0; //Returns 0 to indicate that the program has been run successfully
}
