#Write a python program to find the largest number ammong the three

#Vaishanavi_Ananda_Ayarekar

#FY B

#Roll_no = 132

num1 = int(input("Enter the number 1 = "))
num2 = int(input("Enter the number 2 = "))
num3 = int(input("Enter teh number 3 = "))

if num1>num2 and num1>num3 :
    print('The number 1 is largest')
elif num2>num1 and num2>num3 :
    print('The number 2 is largest')
elif num3>num1 and num3>num2 :
    print('The number 3 is largest')
elif num1==num2 and num2==num3 and num1==num3 :
    print('All the entred numbers are equal')

