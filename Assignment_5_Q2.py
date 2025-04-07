#Write a function called add_numbers that takes two positional arguments and returns their sum.

#Vaishnavi Ananda Ayarekar

#FY-B

#Roll no = 132

def add_number(num1, num2):
    add = num1+num2
    return add

number1 = int(input("Enter the number1 = "))
number2 = int(input("Enter the number2 = "))
addition = add_number(number1,number2)
print('The Addition of',number1,'and',number2,'is',addition)


add_number(number1,number2)
