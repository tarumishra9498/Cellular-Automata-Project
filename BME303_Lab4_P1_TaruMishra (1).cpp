/*
 Taru Mishra
 tm36775
 This program will output values in a vector that meet a condition
 10-4-22
 */
#include <iostream> //Inlcudes the Header Library
#include <vector> //Includes the vector class
#include <iomanip> //Includes iomanip library
using namespace std; //Using standard namespace

int main() { //Begins the int main code

    string input; //Creates a string variable input

    int b1, b2; //Defines integers b1 and b2 as bounds

    int length; //Defines integer length that user enters
    cout << "Enter length: " << endl; //Asks the user to enter in a length
    cin >> length; //Stores length as variable
    vector<int> numbers(length);
    //Creates vector callend numbers with the given length

    for (int i = 0; i < length; i++) {
        //Creates a for loop that runs for the length
        int x; //Calls int x variable
        cout << "Enter an  integer: " << endl;
        //For each i user input will be collected and stored in x
        cin >> x;
        numbers.push_back(x);
        //The numbers entered will be pushed back to the end of the vector
        //String is added to the vector using .pushback operator
    }


    cout << "Please enter the lower bound " << endl;
    cin >> b1; //COUT asks user for the upper boudn and stores for b1
    cout << "Please enter the upper bound " << endl;
    cin >> b2; //COUT asks user for the lower bound and stores in b2

//For loop created that print up till the size of the vector numbers
    for (int i = 0; i <= numbers.size(); i++) {
        if ((numbers[i] <= b2) && (numbers[i] >= b1)) {
            //If statment reads all values in vector and checks to see if they are within bounds
            cout << numbers[i] << ",";
            //Output outputs the numbers that are within bounds
        }
    }
    return 0; //0 is returned if the program has run successfully
}