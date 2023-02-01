#Taru Mishra, tm36775
#10-18-22
#This code will input a string password
#The code will edit the string based on a code and add !

import string #Imports the string library

string1 =input("Enter a password ")
#string1 stores the password entered by the user

string1 = string1.replace("i","1") #the dot replace operator replaces all is with 1
string1 = string1.replace("a","@") #the dot replace operator replaces all as with @
string1 = string1.replace("m","M") #the dot replace operator replaces all ms with M
string1 = string1.replace("B","8") #the dot replace operator replaces all Bs with 8
string1 = string1.replace("s","$") #the dot replace operator replaces all s with $

print(string1 + "!") #Outputs the string with an "!" at the end
