#Lab 8 Probem 3
#Given two integers as user inputs that represent the number of drinks to buy and the number of bottles to restock, create a VendingMachine
#Taru Mishra, tm36775
#11-7-22

#Creates a class called Vending Machine
class VendingMachine:
#Innit function defines the values inputted by the zero in the self constructor
    def __init__(self,value=0): #default value 0
      #self. value equals the inputted value
      self.value = value
#Sell function calls the purchase value to subtract from value
    def sell(self,purchase=0): #default purchase value 0
      self.purchase = purchase
      #The value is set to the value minus the purchases
      self.value = self.value - purchase

    # Restock function calls the purchase value to add to the value
    def restock(self,restock=0):#default restock value 0
    #restock value is set to the self value in the constructor
      self.restock = restock
    #Value has the restock value added to the original value
      self.value = self.value + restock
    #Report calls the self
    def report(self):
    #Prints the inventor with the updated value of bottles
      print("Inventory", self.value, "bottles")

#creats an object called my machine with initial value 20
myMachine = VendingMachine(20)
#purchases stores the user input of the drinks purchased
purchases = int(input("Enter the number of drinks that you would like to purchase: "))
#sell function called to edit value from purchases
myMachine.sell(purchases)
#restock stores the user input of the drinks restocked
restock = int(input("Enter the number of drinks that you would like to restock: "))
#restock function called from class to add the restock to the value
myMachine.restock(restock)
#Reports the new value
myMachine.report()






