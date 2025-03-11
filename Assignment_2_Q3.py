#Write a Python program that reads a number and displays the appropriate day. For example, if the input is 0, the output will be Monday. If the input is 10, the output is calculated as 10 % 7 = 3 output: Thursday).

#Vaishnavi Ananda Ayarekar

#FY-B

#Roll_no= 132

day = int(input("Enter the number = "))
if day >= 7 :
    day = day%7
    print('day')
if day == 0 :
     print('Monday')
elif day == 1 :
    print('Tuesday')
elif day == 2 :
    print('Wednesday')
elif day == 3 :
    print('Thursday')
elif day == 4 :
    print('Friday')
elif day == 5 :
    print('Saturday')
elif day == 6 :
    print('Sunday')



