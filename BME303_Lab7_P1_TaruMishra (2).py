#Lab 7 problem 1
#This code will take the input of a hyphenated sequence and
#output the sequence in alphabetical order
#Taru Mishra, tm36775
#10-31-22

myString = input("Please enter a hyphen separated sequence of words: ")
#Creates a string variable that takes an input from the user of a hyphen separated sequence of words

myList = myString.split("-")
#The .split() operator splits the list at every hyphen character

myList.sort()
#The .sort operator sorts the string in alphabetical order


length = len(myList)
#Length variable that takes the length of the list
newString = ""
#new string is created that holds the edited string
for i in range(length):
    #For loop is created that takes each value in the string
    if i < (length-1): #for all the values up til the last value, a hyphen is added to the string
        newString += myList[i] + "-"
        #New string holds the list value plus the hyphen
    elif (i == length -1):
        #The last value of the string, or length -1, is added without a hyphen
        newString += myList[i]

print(newString)
#The string is printed out that is edited