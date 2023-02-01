#Lab 7 Problem 4
#This code will translate C++ code into Python
#This code will rewrite a recursive function subtracting a number input

#Taru Mishra,tm36775
#10-31-22

#Creates a function called printNumPattern that has two integer arguments n1 and n2
def PrintNumPattern(n1,n2):
    if n1 < 0: #For the if conditon that n1 is less than 0
        print(n1, end = " ") #The n1 value will be printed
        #the end prints the statemtn with a space in between on the same line
        return #returns nothing because Python functions must return a value
    print(n1, end = " ") #prints n1 out of the if statement  on the same line with a space in between
    PrintNumPattern((n1-n2),n2)
    #Calls the printNumPattern function subtracting n1-n2 and using n2 as an argument
    print(n1, end = " ")
    #prints the n1 value, end prints the value on the same line

num1 = int(input("Please enter a positive integer: "))
#Asks the user to input their first positive integer
#Stores input in the n1 integer variable
num2 = int(input("Please enter a second positive integer to subtract from the first: "))
#Asks the user to input their second positive integer
#Stores the input in the n2 integer variable
PrintNumPattern(num1,num2)
#Calls the printNumPattern function for the two variables as the arguments
