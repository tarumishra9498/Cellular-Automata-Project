/*
Created by Taru Mishra, tm36775, Unique Number: 15395
BME303_Lab2_P4_TaruMishra.cpp
Date: 09-17-22
Problem 4: This Program will estimate the PI value using the numerical integration method.
It will calculate the percent error from the original PI value
*/

//LIBRARIES
#include <iostream>  //Indicates that the header library should be included
using namespace std; //Tells to use a standard namespace
#include <iomanip> //Library allows for the setprecision operator to be used to output fixed values
#include <cmath> //Cmath libary allows for mathematical operations like Pow to be performed


int main() {//Holds the main function that performs the commands, return a status to the operating system
    //INTRO

        cout << "Hello! This program will use the integration method to calculate the estimated pi and error based on the number of rectangles n entered." << endl;
        //COUT outputs to the user what the code will be doing.

    //USER INPUT: Number of Rectangles
        cout << "Please enter the total number of rectangles 'n' for the estimation: " << endl;
        int n; //Initializes an integer variable for n
        cin >> n; //CIN operator is used to store the input from the user
        //If is used to perform a command if a certain condition is true. In this case, if there is an error in the input, then the if function
        //will perform the task. If not, the program, will ignore the if condition.
        if (cin.fail()){ //Cin.fail operator tests to see if there was an invalid input from the user, this will execute while cin.fail is true.
            cout << "Sorry, there was an error due to an invalid input. Please enter an integer number of rectangles.";
            //Ouputs that there was an error in the input and that the user should enter a valid integer number of rectangles.
            return 1; //Return 1 will exit the main function and stop the code because the input is not correct.
        } //Closing brackets end the if condition.

    //Intializes variables for the total area calculation as floats and ints.
        float total_area = 0.0; //initializes the float-type variable of the total area to have a value of 0.0
        float rec_area = 0.0; //initializes the float-type varaible of the rectangle area to have a value 0.0
        float actual_PI_value = 3.14159265; //initializes the float-type variable of PI to have an exact value
        float dx = 1.0/n ; //initializes float-type variable dx to be 1/n as a decimal.
        float xi; //initializes the float-type variable xi, which will be an integer number in relation to i, but needs to be float for arithmetic calculation
        int i; //Initializes integer 'i' that will later be useed in the for loop


    //TOTAL AREA Calculation
    //A for loop is used to perform a command while a set of initialized conditions are true.
        for (i = 1; i<=n; i++){ // The initialization conditions for this for loop are:
            //'i' has a value of 1, and the condition test is that while 'i' is less than the 'n' entered
            //the counter is that 'i' is incremented by 1 each task that is performed
            xi = (i-1)*dx; //Using the given equation, the value of xi is set to i -1 times dx
            rec_area = sqrt(1-(pow(xi,2))); /*The individual rectangle area must be equal to the square root of 1 - x^2.
            To do this, two mathematical operators, coming from the cmath library are used; sqrt and pow */
            total_area += rec_area * dx; //The total area increments for each number of rectangles and is added to for each area value of the rectangles multiplied by dx
            //The total area will stop being incremented until the nth value of 'i' is approached
            //Once 'i' is greater than n, the for loop will stop running and the total area is set to a certain value.
        }

    //PI CALCULATION
        float calculated_PI_value = total_area * 4; //Because the total area is only calculated for 1/4 of the pi value, the total area must be multiplied by 4 using the equation
        // that area = pi*(r^2)/4 and r just has a value of 1
        cout << fixed << setprecision(10) << "The estimated value of PI is " << calculated_PI_value ; //COUT operator is used to output the calculated value for PI
        cout << " at n-value " << n << endl; //Outputs the n value
        //at particular value n
    //ERROR CALCULATION
        float error = ((calculated_PI_value - actual_PI_value)/(actual_PI_value))*100; //Float-type variable called error is initialized
        //Using arithmetic operators, the error is set to being the actual PI minus calculated PI divided by the calculated pi
        //Because we want the error as a percent, the error must be multiplied by 100.
        cout << "The error is: " << fixed << setprecision(5) << error << "%" << endl;
        //The setprecision operator coming from the iomanip library allows for error to be set to 5 decimal points
    return 0; //Return 0 sends that the code has been run successfully
} //Closing braces end the int main code
