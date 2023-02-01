/*
Created by Taru Mishra, tm36775, Unique Number: 15395
BME303_Lab2_P1_TaruMishra.cpp
Date: 09-17-22
Problem 1: This program will be calculating the direction of a highways, indicate whether it is a primary or auxillary.
It will also be finding the primary highway of the auxillary highway.
*/

#include <iostream> //Indicates that the header library should be included
using namespace std; //Tells to use a standard namespace convention


int main() { //Holds the main function that performs the commands, return a status to the operating system

    //INTRODUCTION

        cout << "Hello! This program will be finding the highway type and the direction of the highway. " << endl;
        //COUT used to output statement that tells the user what the program will be doing

    //USER INPUT: Highway Number


        cout << "Please enter the highway number (after the 'I - ' )" << endl; //COUT asks the user to enter the highways number
        int highwayNumber; //Integer type variable highway number is initialized to hold user input
        cin >> highwayNumber;//Cin operator stores the number entered by the user in the highwayNumber variable

        //Checking for errors

        //If statement is created to check the condition of whether the variable is invalid is true
        if(cin.fail()){//Cinfail operator checks to see if the highway Number is a valid integer, it will bode true if the highway number is invalid
            //If the highway number is invalid, COUT will output that the number entered in invalid
            cout << "Sorry, there was an invalid input of the highway number. Make sure you only enter an integer and no letters" << endl;
            return 1; //Return 1 will exit the main function in the case of an invalid input and stop the program
        }



    //DIRECTION

        string direction; //Direction variable is initialized as a string.
        int R; //R variable, the remainder, is initialized as an integer.
        R = highwayNumber%2 ; //Modulus operator % is used to see what the remainder will be when the highway number is divided by 2
        //The value of r is the remained when the highway number is divided by 2 and it can only equal 0 or 1

        //If statement checks to see if the condition that the remainder is 0 is true.
        if (R == 0){ //== operator sees if the value of R is zero
            //In this case, if R is 0, then the number must be even, since even number divided by 2 have 0 remainder
            direction = "east/west"; //If the condition the number is even true, then the direction will be set to string "east/west"
        }//If the if statement is true then the code will move to next section, if not it will go to else if.

        //Else if statement checks to see if the condition that the remainder is not 0 is true.
        else if (R == 1){ //== operator checks to see if the value of R is equal to 1
            //If the remainder is not zero, then the number is probably odd.
            direction = "north/south"; //If the number is odd, then the variable direction is set to be equal to the string "north/south"
        } //If the else if is true, then it will move to the next section
        //If both of these statements are not true, then the else will run
        else{
            cout << "Sorry, there is an error in the code. Please enter a valid integer.";
            //COUT used to output that there is an error in the code
        }


    //AUXILLARY OR PRIMARY

        string highwayType; //The string the type of the highway is initialized, it does not hold a value
        //If statement checks to see if the highway is primary
        if (highwayNumber >= 1 && highwayNumber <= 99){ //The >= and <= operators used to compare highway values
            //&& is AND operator that executes if both conditions are true
            //If the highway is more than/equal to 1 and less than equal to 99 then condition if will execute
            highwayType = "primary"; //The value of "primary" is then assigned to highwayType if true
        }
        //else if runs if the if above is not true
        else if (highwayNumber >= 100 && highwayNumber <= 999){ //Checks to see if value of highway number is between 100 and 999 using mathematical operators
            //&& is AND operator that executes if both conditions are true
            highwayType = "auxillary"; //If the condition is true, the highwaytype variable will be assigned value "auxillary"
        }
        //second else if runs if the above if and else if are not true
        else if (highwayNumber < 1 || highwayNumber >999) { //Checks with mathematical operators if the highway number is less than 1 OR more than 999
           // || is the OR operator that executes if one condition is true
            cout << "This highway type is invalid" << endl; //Outputs invalid type of highway statement with COUT
        }
        else{ //if none of the above conditions are true then there is probably an error in the code, so else runs
            cout << "Sorry, there is an error in the highway number, please enter a valid integer"; //Uses COUT to output that highway number value is invalid
            return 1; //Return 1 exits main funciton and stops the program.
        }


    //OUTPUT

        //If statement uses == operator to see if the value of the highWay type assigned above is auxillary
        if (highwayType == "auxillary"){
            int primary = highwayNumber%100; //Integer variable called primary is initialized and is set to have the value of the highway number modulus 100
            //The int primary will be the remaineder of the highway number divided by 100 so it will print the primary number, the last two digits
            if (primary == 0) { cout << "Invalid auxillary highway number entered, there was an error. Please enter a valid highway number."<< endl;
                return 1;
            }//The primary should never be zero, so this if statement checks to see if the primary is zero and then returns 1 to stop the program because an error has been made

            cout << "Highway I- " << highwayNumber << " is " << highwayType << " serving I- "<< primary << ", and goes " << direction <<"."<<  endl;
            //COUT is used to output the highway number, highway type, its primaru highway number, and the direction that it goes.
        }

        //Else if runs if the if statment above is not true. It outputs the condition for a primary highway.
        else if (highwayType == "primary"){ // == operator used to check of the highway type is primary as defined above
            cout << "Highway I- " << highwayNumber << " is " << highwayType << " and goes " << direction <<"."<<  endl;
            //COUT is used to output the highway number, highway type primary, and the direction that it goes.

        }
        else {cout << "There was an error in the highway number. Please enter a valid integer." << endl;}
        //Else statement executes if none of the above are true


    return 0;//Returns a value of zero to reveal whether or not the program has run successfully.

}//Closing brace ends int main code
