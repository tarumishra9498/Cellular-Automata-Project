#Taru Mishra, tm36775
#10-24-22
#This code will take in the pars and strokes from the user and output the score
par = int(input("Enter a par value: ")) #stores the par value from user as an int
strokes = int(input("Enter the strokes value: ")) #stores the strokes value from user as an int

if (par <3) or (par >5): #If statement checks to see if par is less than 3 or more than 5
    print("Error. Make sure par is 3,4, or 5") #Outputs the error statement.
else: #Else statement executes if the above condition is not met
    if strokes == (par-2): #given the else condition that strokes = par -2
        print("Eagle") #Print statement outputs Eagle
    elif strokes == (par-1): #given the else condition that strokes = par -1
        print("Birdie") #Print statement outputs Birdie
    elif par == strokes: #given the else condition that strokes = par
        print("Par")  #Print statement outputs Par
    elif strokes == par + 1: #given the else condition that strokes = par + 1
        print("Bogey")  #Print statement outputs Bogey
    else: #If none of the elif conditions within the else are met, then a statement saying that there is an error will execute
        print("there is an error")
