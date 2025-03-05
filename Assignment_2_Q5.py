#Write a python program that calculate the electricity bill based upon the number of units used

#Up to 100 units = 5rs per unit.
#101 to 300 units = 7rs per unit. 
#Above 300 units = 10rs per unit.

#Vaishnavi Ananda Ayarekar

#FY B

#Roll_no 132

units = int(input("Enter the number of units used "))

if units<=100 :
    bill = units*5        #upto 100 units 5rs per unit
elif units >100 and units <= 300 :
    bill = (100*5) +((units - 100)*7)     #101 to 300 units 7r per unit
else :
    bill = (100*5)+(200*7)+((units-300)*10)  # Above 300 units 10rs per unit


print('You have used',units,'units and your electricity bill is',bill)
