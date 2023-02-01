
/*
Created by Taru Mishra, tm36775, Unique Number: 15395
BME303_Lab1_P1_TaruMishra.cpp
Date: 09-05-22
Problem 4: This Program will take the full name of users and their age.
It will output the name, age, and a modified version of the name with the first two characters and last character removed.
The data is then displayed in an evenly spaced table.
*/

#include <iostream> //Indicates that the header library should be included, used for cout, cin, endl
#include <string> //Allows for the usage of the string library to store words and characters, std:: string
#include <iomanip> //Library allows for the output appearance to be controlled, like setprecision

using namespace std; //Using the standard namespace


int main() { //Holds the main function that performs the commands, return a status to the operating system

    //INTRODUCTION
    cout << "Hello, we will be displaying the Name, Age, and Modified Name of Three People." << endl; //Outputs what the program will do doing for the user

    //NAMES: First the computer takes in the names of the three different inputs and stores them as strings

        //Person 1
    cout << "Hello person number one, what is your first and last name? " << endl ; //Cout operator asks to enter the first and last name of person 1
    string Name1; //String type variable "Name1" is initialized to the hold the value of the person's first and last name
    getline (cin, Name1); //Getline stores the entire line that is inputted by the user as a string in the Name1 string

        //Person 2
    cout << "Hello person number two, what is your first and last name? " << endl ; //Cout operator asks to enter the first and last name of person 2
    string Name2; //String type variable "Name2" is initialized to the hold the value of the second person's first and last name
    getline (cin, Name2); //Getline stores the entire line that is inputted by the user as a string for the second name on the Name2 string

        //Person 3
    cout << "Hello person number three, what is your first and last name? " << endl ; //Cout operator asks to enter the first and last name of person 2
    string Name3; //String type variable "Namee3" is initialized to the hold the value of the third person's first and last name
    getline (cin, Name3); //Getline stores the entire line that is inputted by the user as a string for the third name in the Name3 string


    //AGES: Second the computer takes in the ages of the three different inputs and stores them as ints

        //Person 1
    cout << "Person number one, please enter your age as an integer: " << endl ; //Cout operator prints statement to ask to enter the age of the person 1 as an integer
    int Age1; //Int type variable "Age1" is initialized to the hold the value of the first person's name
    cin >> Age1; //Cin operator stores the next number in Age1

        //Person 2
    cout << "Person number two, please enter your age as an integer: " << endl; //Cout operator prints statement to ask to enter the age of the person 3 as an integer
    int Age2; //Int type variable "Age2" is initialized to the hold the value of the second person's name
    cin >> Age2; //Cin operator stores the next number in Age2


        //Person 3
    cout << "Person number three, please enter your age as an integer: " << endl; //Cout operator prints statement to ask to enter the age of the person 3 as an integer
    int Age3; //Int type variable "Age3" is initialized to the hold the value of the third person's name
    cin >> Age3; //Cin operator stores the next number in Age3


    //MODIFY: The length of each of the names' will be measured and a new string, modifyName will be created that take off the first two characters and last character

        //Person 1
    int size_Name1 = Name1.length(); //New integer "int size_Name1" finds the length of the string, Name 1
            string modifyName1 = Name1.substr(((size_Name1-(size_Name1-2))),(size_Name1-3));  //StringName.substr() operator takes off the first two characters and last
            //Based on the name length subtracts by 2 at the beginning and name length subtracted by 3 to take off the final character for Name1

    int size_Name2 = Name2.length(); //Integer "int size_Name3" finds the length of the string, Name 2
        string modifyName2 = Name2.substr(((size_Name2-(size_Name2-2))),(size_Name2-3)); //StringName.substr() operator takes off the first two characters and last
        //Based on the name length subtracts by 2 at the beginning and name length subtracted by 3 to take off the final character for Name2


    int size_Name3 = Name3.length(); //Integer "int size_Name3" finds the length of the string, Name
        string modifyName3 = Name3.substr(((size_Name3-(size_Name3-2))),(size_Name3-3)); //StringName.substr() operator takes off the first two characters and last
        //Based on the name length subtracts by 2 at the beginning and name length subtracted by 3 to take off the final character for Name3

    //OUTPUT TABLE: The setw operator is used in addition to the name length variable to evenly space the values of the name, age, and modified name for each person


    cout <<"Name: " << setw(20)<< "Age: " << setw(20) << "Modified: " << endl; //Cout operator is used to print the first row labeling Name, Age, and Modified Name
        //The Name: and Age: strings that are outputted are set to take up a distance of 20 characters using the setw operator, which automatically adds spacing to the right
        //Endl is used to stop the line and start a new one after it is printed
    cout << "   " << endl; //Insert a blank line so that there is some space between the column titles and values
    cout << Name1   << setw(23-size_Name1) << Age1 << setw(size_Name1 + 10)<<  modifyName1 << endl; //Outputs the Name, Age, and modified Name for Person 1
        //Becase Age1 takes up three characters, Name1's length is subtracted from 20 + 3 (23) so that the lines are evenly spaced
        //10 Spaces plus the length of Name1 are added to the right of the modified output name, which is half of the original 20 space distance between the strings
        cout << Name2  << setw(23-size_Name2) << Age2 << setw(size_Name2+ 10)<<  modifyName2 << endl; //Outputs the Name, Age, and modified Name for Person 2
    //Age2's three characters plus the original (23) are subtracted from the length of Name2 to set that corresponding character length to the right of Age2 with the setw operator.
    //10 Spaces plus the length of Name2 are added to the right of the modified output name # 2, which is half of the original 20 space distance between the strings
    //Setw spacing allows a consistent table with even spacing to be outputted.
    cout << Name3  << setw(23-size_Name3) << Age3 << setw(size_Name3 + 10)<<  modifyName3 << endl; //Outputs the Name, Age, and modified Name for Person 3
    //Age3's three characters plus the original (23) are subtracted from the length of Name3 to set that corresponding character length to the right of Age2 with the setw operator.
    //10 Spaces plus the length of Name3 are added to the right of the modified output name # 3, which is half of the original 20 space distance between the strings

    return 0;//Returns a value of zero to reveal whether or not the program has run successfully.

} //Closing brace ends int main code

