#Lab 7 Problem 3
#This code will take an input from the user from the user
#Thise code will rotate the list [1,2,3,4,5,6]
#Taru Mishra, tm36775
#10-31-22

#Function is called rotate list with the arguments k and myList
def rotateList(k,myList):
    for i in range(k): #for each value of i in the k rotation value
        myList.append(myList[i])
        #The list become the list beginning at value k
    length =len(myList) #length stores the length of the list argument
    myList = myList[k:length]
    #the new list is truncated to be the list from value k to the length
    return myList
#returns the value of the edited list

newList = [1,2,3,4,5,6]
#new list argument for this code is set standard of [1,2,3,4,5,6]
rotateValue = int(input("Please enter a value to rotate k by:"))
#rotate value stores the input of the rotation value from the user
print(rotateList(rotateValue,newList))
#prints the edited string calling the rotateValue function



