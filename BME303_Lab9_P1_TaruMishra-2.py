#This code will calculate the moving average of a list
import numpy as np #imports numpy library

inFile = open('303_Lab9_P1.txt', 'r') #Reads lab problem
lines = inFile.readlines() #lines stores a string as the lines read in the file
ws = 0 #ws is the window size stores in the second line in the file

values = lines[0].split() #values stores the first line in a list of strings
intValues = [] #creats a blank list that will store the values as integers
for value in values: #for loops converts every value as an integer in the new list
    intValues.append(int(value))
ws = int(lines[1]) #the second value in the line is the window size
Array = np.array(intValues)#Array is the numpy converted form of the integer values list
inFile.close() #closes the file after reading it

#function that finds the moving average taking in an array and window size
#This sets the default window size to 3
def findMovingAverage(someArray, window_size = 3):
    length = np.size(someArray) #length stores the length of the inputted array
    newArray = np.zeros(length-window_size+1) #new array creates a blank array of zeroes for the average values
    #the amount of average values is the array length - window size + 1
    for i in range(length-window_size+1): #for the length of the newArray, the average is calculated
        #based on window size and stores into the new array
        avg = np.sum(someArray[i :(i+window_size)])
        newArray[i] = (avg/window_size)
    return newArray #returns the value of the new array
outfile = open("BME303_Lab9_P1_TaruMishra.txt","w") #outfile is a new file written on
result = findMovingAverage(Array,ws) #stores the new array returned from the function
for average in result: #for each value in the result array, the outfile is written onto
    outfile.write("%0.1f "%average) #the values are printed to one decimal place
outfile.close() #closes the outfile





