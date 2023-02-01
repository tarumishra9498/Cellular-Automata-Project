#Lab 7 Problem 2
#This code will take an input of scrabble words and output the points from a dictionary
#Taru Mishra, tm36775
#10-31-2022

tile_dict = { 'A': 1, 'B': 3, 'C': 3, 'D': 2, 'E': 1, 'F': 4, 'G': 2, 'H':
           4, 'I': 1, 'J': 8, 'K': 5, 'L': 1, 'M': 3, 'N': 1, 'O': 1,
          'P': 3, 'Q': 10, 'R': 1, 'S': 1, 'T': 1, 'U': 1, 'V': 4,
          'W': 4, 'X': 8, 'Y': 4, 'Z': 10 }
#The above shows the scrabble dictionary related the letters to the values in the code

word = input("Enter your scrabble word: ")
#Creates a string variable called word that takes in an input of words from the user
total = 0
#A total integer variable is created with a value of 0

for i in word:
    #For each letter in the word
    if i not in tile_dict:
        #if i is not in dictionary then an error message will print
        print("There was an error. Please make sure all letters are uppercase.")
        total = 0 #The total points is set to zero
        break #break statement will exit the if and output the 0 total points
    elif i in tile_dict:
        #else if statement occurs if i is actually in the dictionary
        total += tile_dict[i]
        #The total is set to the total count for each letter from the dictionary
print("The sum of the tile points is:", total)
#total outputs the sum of the total points
