#Taru Mishra, tm36775, 10-18-22
#This code will input two integers
#It will output the first int and increment it till it reaches the second

int1 = int(input("Please input an integer "))
#Creates an integer variable called int1 that gathers the input from the user
int2 = int(input("Pleas eenter a second integer "))
#Creates a second integer variable called int 2 that gathers input from the user
i = 0 #i, the counter, is set to be 0
if int2 < int1:
    #If statement checks to see if the int 2 is less than int 1
    print("Second integer can't be less than the first")
    #If so, it will output to the user that the second integer cannot be less than the first
elif int2 >=int1: #Elif statement executes if int1 is more than or equal to int 2
    for i in range(int1,int2+1,5):
        #For loop outputs the value of int1 till int2 incrementing by 5
        print(i, end=" ")
        #The value of i is printed and the end operator allows it to be printed on the same line
else: #Else statement prints that there is an error if none of the conditions are true
    print("There was an error, please enter two integers")

