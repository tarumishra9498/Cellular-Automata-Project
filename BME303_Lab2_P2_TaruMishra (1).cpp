/*
Created by Taru Mishra, tm36775, Unique Number: 15395
BME303_Lab2_P1_TaruMishra.cpp
Date: 09-17-22
Problem 2: This Program will take in a letter and a number from the user. It will then output whether the letter is a vowel or consonant, and whether the number is in range or not, or less than zero.
*/

#include <iostream> //Indicates that the header library should be included

using namespace std;//Tells the computer to use a standard namespace conventions

int main() { //Holds the main function that performs the commands, return a status to the operating system

    //INTRODUCTION
        cout<<"Hello! This program will be taking in a single letter and number from the user and outputting information about the letter and number."<< endl;
        cout << " " << endl;
        //Cout prints commands/statements to the screen for the user informing them about what the program will be doing.

    //USER INPUT 1: Letter
        cout << "Please enter a single letter." << endl; //Cout operator includes a command to user to enter a single letter
        char letter; //The variable letter is initialized as a character type, will later be stored from user's input
        cin >> letter; // Cin operator is implemented to store value of the letter from the user in the "letter" variable

        //If statement is created which checks if a certain condition is true, and then outputs a task
        //The below if statement will check to see if the input from the user is valid
        //The cin.faill operator is used to check to see if there is a true condition that there is an input error of the character
        //The OR symbol "||" also checks to see if another condition is true: the character entered by the user is not a capital or lowercase letter in the alphabet
        //For or, only one condition has to be true for the program to run.
        if (cin.fail() || (letter != 'a' && letter && 'u' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'A' && letter != 'E' && letter != 'I' && letter != 'O'
        && letter != 'U' && letter != 'b' && letter != 'c' && letter != 'd' && letter != 'f' && letter != 'g'&& letter != 'h' && letter != 'j' && letter != 'k' && letter != 'l' && letter != 'm'
        && letter != 'n'&& letter != 'p'&& letter != 'q'&& letter != 'r'&&letter != 's'&&letter != 't'&&letter != 'v'&& letter != 'w'&& letter != 'x'&& letter != 'y'&& letter != 'z'
        && letter != 'B' && letter != 'C' && letter != 'D' && letter != 'F' && letter != 'G'&& letter != 'H' && letter != 'J' && letter != 'K' && letter != 'L' && letter != 'M'
        && letter != 'N'&& letter != 'P'&& letter != 'Q'&& letter != 'R'&& letter != 'S'&& letter != 'T'&& letter != 'V'&& letter != 'W'&& letter != 'X'&& letter != 'Y'&& letter != 'Z')) {
           //The "not operator" != allows us to check if the letter is not equal to something, it is included in a series to check capital and lowercase letters.
           //The "and operator" && functions only when all conditions are true. In this case, if all the conditions that the letter is not in the alphabet are true, then the OR (||) will be true.
           //If the OR is true, then the line will execute inside of the if statement.
            cout << "Sorry, there was an error when you entered your character. Please make sure that you are entering a valid letter of one character. Do not add any other characters apart from the letter."<< endl;
            //Cout outputs to the user that their input is incorrect and tells them what they should enter
            return 1; // return 1 immediately exits the main function and stops the program.
        }

    //USER INPUT 2: Number
        cout << "Please enter a number, decimals are OK: " << endl; //Cout operator includes a command to user to enter a number
        double number;//The variable number is initialized as a double type, will later be stored from user's input.
        cin >> number; // Cin operator is implemented to store value of the numble from the user in the "number" variable

        //If statement is utilized again to check to see if a condition is true
        //Cin.Fail operators checks to see if the condition that the number is not an integer is valid. If so, it will execute the line.
        if (cin.fail()) {
            //If the condition is true, a COUT outputs that the number is not valid and what the user should be inputting.
            cout << "Sorry, there was an error when you entered your number. Please make sure that you are entering a valid number (integer or decimal). Do not add any other characters apart from the number." << endl;
            return 1; // return 1 immediately exits the main function and stops the program.
        }

    //OUTPUT 1: Letter is a vowell or not

        //VOWEL

        //If statement is used to check if the condition that the letter is a vowell is true
        //The OR operator || is used to see if the condition that the letter equals a e i o or u (lowercase or capital) is true. Or will execute if one statement is true.
        //The equals operator == checks to see if the letter has a value equal to a certain letter
        if (letter == 'a' || letter == 'u' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U' ){
            cout << letter << " is a vowel.  " << endl; //Outputs with the variable that it is a vowel if oen of the obove conditions is true
        }
        //if the if statement is true, the program will ignore the else if and else below and move onto checking the conditions for the numbers

        //CONSONANT

        //If the if statement is not true, the program will ignore the output and move onto the else if.
        //The else if functions as a second if statement checking to see if another set of conditions are true: the letter is a consonant or not.
        //The || or operator and the == operator now check to see if the letter equals the value of one of the letters in the alphabet in capital or lowercase form
        else if (letter == 'b' || letter == 'c' || letter == 'd' || letter == 'f' || letter == 'g'|| letter == 'h' || letter == 'j' || letter == 'k' || letter == 'l' || letter == 'm'
            || letter == 'n'|| letter == 'p'|| letter == 'q'|| letter == 'r'||letter == 's'||letter == 't'||letter == 'v'||letter == 'w'||letter == 'x'||letter == 'y'||letter == 'z'
            || letter == 'B' || letter == 'C' || letter == 'D' || letter == 'F' || letter == 'G'|| letter == 'H' || letter == 'J' || letter == 'K' || letter == 'L' || letter == 'M'
            || letter == 'N'|| letter == 'P'|| letter == 'Q'|| letter == 'R'||letter == 'S'||letter == 'T'||letter == 'V'||letter == 'W'||letter == 'X'||letter == 'Y'||letter == 'Z'){
            //If one of the conditions yields true, that the letter has the value of an alphabet character, the Cout will be used to output that the letter is consonant.
            cout << letter << " is a consonant.  " << endl;
        }
        //if the else if statement is true, the program will ignore the else if and else below and move onto checking the conditions for the numbers

        //ELSE

        //If both the above conditions are not true, then the program will go onto execute ELSE, which outputs something when the other conditions don't work
        else{
            //Outputs that there is probaably an error in what the user entered and that they need to enter a valid letter.
            cout << "Sorry, there was an error when you entered your letter. Please make sure that you are entering a valid letter. Do not add any other characters apart from the letter."  << endl;
            return 1; // Return 1 exits the main function and does not let the rest of the program execute.
        }

    //OUTPUT 2: Range of the number entered

        //If statment checks to see the conditon that the number is less than zero using the "<" algorithm
        if (number < 0) {
            //If this condition is true, then the cout operator will output that the number is less than zero.
            cout << number << " is less than zero." << endl;
        }
        //If the condition is true the code will stop. If not, it will go to the else if.

        //Else if statement checks to see if another condition is true, that number is greater than and equal to zero and the number is less than or equal to 100
        //">=" operator checks greater than or equal to "<=" checks to see if less than or equal to
        //&& operator will only allow the else if condition to execute if both statements are true.
        else if (number >= 0 && number <= 100) {
            //If both conditions are true, than the program will output that the number is in range using COUT
            cout << number << " is in range." << endl;
        }
        //If the else if is true, the program will stop. If not, it will move onto the second else if.

        //The third else if checks to see if the number is greater than 100 using ">" algorithm
        else if (number > 100) {
            //If the number is greater than zero, it will print that the number is actually out of bounds using COUT
            cout << number << " is out of bounds." << endl;
        }
        //If the else if is true, the program will stop. If not, it will move onto the else;

       //The else executes if none of the above conditions are true.
        else {
            //The statement that there is probably an error in the number entered and what the user should enter for it to be valid occurs with COUT
            cout << "Sorry, there was an error when you entered your number. Please make sure that you are entering a real number (decimal or integer). Do not add any other characters apart from the number. "<< endl;
            return 1;
            //Return 1 exits the main function and stops the program
        }

        return 0; //Returns a value of zero to reveal whether or not the program has run successfully.
    } //Closing brace ends int main code

