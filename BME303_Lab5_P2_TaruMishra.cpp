/*
 BME303 Lab 5 Problem 2
 10-17-22
 tm36775

 This code will inheret a class and edit a question that will be outputted to the user.
 This code will then use the class to indicated whether what the user has entered is correct or not.
 */
#include <iostream> //Includes the main header library
#include <string> //Includes the string library

using namespace std; //Implements a standard namespace
/*
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Here begins the code for the base class Question.
 * Do not change the following part!
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 */
class Question{
public:
    /**
     * Constructs a question with empty text and answer.
     */
    Question();
    /**
     @param question_text the text of this question
     */
    void set_text(string question_text);
    /**
     * @param correct_response the answer for this question
     */
    void set_answer(string correct_response);
    /**
     * @param response the response to check
     * @return true if the response was correct, false otherwise
     */
    bool check_answer(string response) const;
    /**
     * Displays the question.
     */
    void display() const;
private:
    string text;
    string answer;
};
Question::Question(){
    Question::set_text("Question is empty!");
    Question::set_answer("");
}
void Question::set_text(string question_text) {
    text = question_text;
}
void Question::set_answer(string correct_response) {
    answer = correct_response;
}
bool Question::check_answer(string response) const {
    bool result = (response == answer);
    return result;
}
void Question::display() const
{
    cout << text << endl;
}

//Ends the original parent class that was to be used.

//New Class is created called FillIn Question that inherets the Question class in public
class FillInQuestion : public Question
{
public:
    //The constructor of fill-in question is declared here and it takes in a string input
    FillInQuestion(string q1);

    //a member function is declared here that is called editQuestion. It will edit and truncate the question that is called and set the answer.
    void editQuestion();
    //A member function called "checkInput" is called that checks the user response and outputs if it is correct or not
    void checkInput(string userResponse);

private:
    string newQuestion; //The private member newQuestion is declared here which stores the original question and gets edited in editQuestion()
};
//Ends the class FillInQuestion call

FillInQuestion::FillInQuestion(string q1) { //Calls the constructor that takes in the value q1 from the main
    newQuestion = q1; //the new question variable is set to the main string
}
//your member functions here, if any

//Edit question is created that is a void function with no parameters
void FillInQuestion::editQuestion() {
    int length = newQuestion.length(); //length stores the length of the question
    string question = "The winner of the Red River Shootout will be _UT Austin_,obviously."; // a preset example question
    string questionPart; //Variable that stores the part of the string that is the question
    string questionPart1; //Variable that stores the first part of the question string
    string questionPart2; //Variable that stores the second part of the question string
    string answerPart; //Variable that stores the part of the string that is the answer
    int i = 0; //sets integer i to be 0
    while (i < length){ //While loop is created that truncates the string till the underscore
        if (newQuestion[i] == '_'){ //String is set as an array to read everything untill the underscore character
            questionPart1 = newQuestion.substr(0,i); //newQuestion is truncated till the first underscore to be the question
            answerPart = newQuestion.substr(i+1,length); //the second hald of new question is truncated to be and answer
            break;} //Once the underscore is read the while code will stop
        else{
            i++;} //if the underscore is not yet reached i will continue to read the indexes of the string
    }
    questionPart1 = questionPart1 + "___"; //Extra underscores are added to the question part for good formatting
    int length2 = answerPart.length(); //the length of the answer part is taken

    //A second while loop is created to truncate the answer part from UT Austin __, obviously
    int k = 0; //k variable to count in the while loop
    while(k < length2){ //While the k value is less than the length of answer part
        if (answerPart[k] == '_'){ //Each index of the answer part is read
            questionPart2 = answerPart.substr(k,length2); /*the second part of the question is
            stored till after the underscore*/
            answerPart = answerPart.substr(0,k);//The answer is everything till the index of the first underscore
            break;} //After the underscore is truncated the while loop ends
        else{
            k++;  //if the underscore is not yet reached k will continue to read the indexes of the string
        }

    }
    questionPart = questionPart1 + questionPart2; //the questionpart overall is the first and second question parts
    set_text(questionPart); //questionPart is set to text calling the original class
    set_answer(answerPart); //answerPart is set to answer calling the original class
    display(); //Display outputs the edited question as text
}
void FillInQuestion::checkInput(string userResponse) { //A void function called fillinquestion is called
    //The function has an argument of userResponse
    bool true_or_false = check_answer(userResponse); //bool variable is set to be the bool version of check answer output
    if (true_or_false) { //if the variable is true or the response is correct it will output correct
        cout << "Correct!" << endl;
    } else if (!true_or_false) { //if the bool variable is false or the response is false it will output not really
        cout << "Not Really!" << endl;
    } else { //else if none of the conditions are true it will just output that there was an error
        cout << "There was an error in the input." << endl;
    }
}

int main() {
    string question = "The winner of the Red River Shootout will be _UT Austin_,obviously."; // a preset example question
    string response;  // variable to store the response from the user
    FillInQuestion userQ(question); //Calls the constructor and is set to the question variable defined in main
    userQ.editQuestion(); //Edits the question to display as the output
    // your code here to ask the user this question, prompt the user to enter their
    //response and tell them if they got the answer right
    getline(cin, response); //stores the input from the user in the response variable
    userQ.checkInput(response); //checks input and outputs whether it is true or false to the user

    return 0; //returns 0 if the program is completed
}