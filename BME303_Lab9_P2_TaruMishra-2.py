#This code will calculate the population of cranes over time
#Taru Mishra
#tm36775
#11-27
import matplotlib.pyplot as plt #imports matplotlib
import numpy as np #imports numpy

#Gathers user input about population size, initial year, growth rate, number of years
pi = int(input("Enter initial population size"))
yi = int(input("Enter initial year"))
gr = float(input("Enter growth rate"))
ny = int(input("Enter number of years"))
#cranepop function calculates the crane population over time
def cranePop(pop_size_initial, inital_year, growth_rate, num_years):
    pop = pop_size_initial #pop is the current population
    populationList = [] #a list that stores the population

    for i in range(num_years): #for loop that appends the population per year
        pop = pop * (1 + growth_rate/100) #changes the growth rate to a decimal for increase
        populationList.append([inital_year+i+1, pop])#appends year and population
    numpyList = np.array(populationList)  # converts list to numpy array
    # blank lists for the x and y values
    xvalues = []
    yvalues = []
    for value in numpyList:
        xvalues.append(value[0])  # x is the value at 0
        yvalues.append(value[1])  # y is the value at 1
    # converts x and y values into a numpy array
    XValues = np.array(xvalues)
    YValues = np.array(yvalues)
    newlist = [0,0]
    newlist[0] = XValues
    newlist[1] = YValues
    return newlist #returns the whole list with years and values

#generates a figure

fig,ax = plt.subplots(figsize=(8,3),dpi=80)

result = cranePop(pi, yi, gr,ny) #stores the result for the given values

XFunc = result[0] #stores the year values
YFunc = result[1] #stores the population values

#plots the x and y values in a red line with dashed lines showing population
ax.plot(XFunc,YFunc,color = 'red', linewidth = 2.0, linestyle = '--', label = 'Population')
#sets the title of the plot
ax.set_title('Florida Sandhill Cranes in Okefenokee swamp')

#sets the limit for x between 2022-2050
ax.set_xlim(2022,2050)
#sets the limit for y  between 400-800
ax.set_ylim(400,800)
#sets labels for x and y axis
ax.set_xlabel('Year')
ax.set_ylabel('Population')

#Sets 8 ticks on the x axis
ax.set_xticks(np.linspace(2022,2050,8,endpoint = True))
#sets 5 ticks on the y axis
ax.set_yticks(np.linspace(400,800,5,endpoint = True))
#creats a legend to define population
ax.legend(loc=(0.1,0.7))
ax.grid(visible = True) #makes grid visible
#saves the figure in pdf
plt.savefig('BME303_Lab9_P2_Population_TaruMishra.pdf', bbox_inches = 'tight', pad_inches = 0.02)
plt.show() #results figure
