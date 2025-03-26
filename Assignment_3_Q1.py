#Write a program with a loop that asks the user to enter a series of positive numbers. The user should enter a negative number to signal the end of the series. After all the positive numbers have been entered, the program should display their sum.

#Vaishnavi Ananda Ayarekar

#FY- B

#Roll_No = 132

add = 0 
number = 1
while number > 0 :
    
  number = int(input('Enter the positive number (Negative number to stop) = '))
  if number > 0 :
    add = add+ number
             
print('The addition is',add)
               
