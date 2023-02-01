/*
Created by Taru Mishra, tm36775, Unique Number: 15395
BME303_Lab1_P5_TaruMishra.cpp
Date: 09-05-22
Problem 5: This program will read the total book price and number of books.
It will compute the tax and shipping charge, and output the price of the order with 2 digit precision
*/


#include <iostream> //Indicates that the header library should be included, used for cout, cin, endl
#include <iomanip> //Library allows for the output appearance to be controlled, specifically setprecision

using namespace std; //Using the standard namespace

int main() { //Holds the main function that performs the commands, return a status to the operating system

    //VARIABLES: There are various variables throughout this program in doubles and ints
        double bookPrice; //initializes the book price as a double which can hold decimal values
        int numberBooks; //initializes the number of books as an integer value
        double tax; //initializes the tax as a double, it will be a decimal
        double shippingCharge; //initializes the shipping Price as a double, it will be a decimal
        double finalPrice; //initializes the final price as a double, it will be a decimal

    //INTRODUCTION: Introduces what the program will do

    cout << "Hello! This program will be calculating the total book price. " << endl; //Cout prints an intro to what the program will do
    cout << "   " << endl; //Adds spacing between intro statments and other print statments to make output cleaner and more spaced out

    //BOOK PRICE

    cout << "Please enter the total book price in dollars. Exclude the dollar sign in the front when entering your price (For example,for a price $25.89, enter 25.89) : "  << endl;
    //Prints statement asking the user to enter in their book price in specific format so that it can be taken in as a double
    cin >> bookPrice;
    //Cin stores the user input as a double value inside of the bookPrice variable

    //TOTAL NUMBER OF BOOKS

    cout << "Please enter the total number of books as an integer: " << endl; //Prints statement asking the user to enter in their book number specifically as an integer
    cin >> numberBooks;
    //Cin stores the user input as a int value inside of the numberBooks variable

    //CALCULATING TAX

    double taxPercent = 7.5; //The given tax percent is 7.5 percent, stored in a double variable
    tax = (taxPercent/100)* bookPrice; //Tax, a new variable, finds how much the cost of tax is added to the book
    //To find the total tax, the percent must first be converted to a decimal (divided (/) by 100) and then multiplied using operation (*) by the book price which was taken from the user

    //CALCULATING SHIPPING CHARGE

    shippingCharge = 2 * numberBooks ; //Arithmetic operation "*" is used to multiply the number of books by 2 to figure out the shipping charge

    //CALCULATING TOTAL PRICE

    finalPrice = bookPrice + tax + shippingCharge; //The finalPrice function is called
    // The book price plus the additional prices (tax and shipping charges) are added (+) to equal the ultimate final price

    cout << fixed << setprecision(2) << "Your total Price is: $" << finalPrice << endl ; //This statement prints the total price of the book
    //The setPrecision operator outputs a value that is set to two decimal places.

    return 0;//Returns a value of zero to reveal whether or not the program has run successfully.

}//Closing brace ends int main code
