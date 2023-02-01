#Taru Mishra, tm36775,10-18-22
#This code will use the MonteCarlo Method to estimate Pi

import math  #Includes the math library
import random #Includes the random library
import time #Includes the time library

random.seed(time.time()) #Sets the seed value to the time

num = 0 #Set the num value to an integer of value 0
nummax = 1000 #Sets the num max value to an interger of value 10000
hit = 0.0 #Sets the hit to be a double of value 0.0


#While statement checks to see while the num is less than the maximum num
while num < nummax:
    y = random.random() #Y is set to a random float value between 0 and 1
    x = random.random() #X is set to a random float value between 0 and 1


    num += 1 #Num is incremented by 1
    if (pow(x,2) + pow(y,2)) <= 1:
        #The equation that when x^2 + y^2 <= 1
        #Pow operator squares x and y
        hit += 1 #Hits increments by 1
    ratio = hit/nummax #Ratio is set to the hit divided by nummax
    est_pi = ratio * 4 #est_pi is multiplied by 4

print("The estimated pi value is %0.6f" % (est_pi))
#The estimated value of pi is printed till having a precision of 6
#Using the percent signs to set the precision





