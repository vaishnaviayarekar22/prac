#Write a function called is_positive that takes one argument (a number) and returns True if the number is greater than 0, and False otherwise.

#Vaishnavi Ananda Ayarekar

#Fy-B

#Rool no = 132

def is_positive(number):
    if number > 0:
        return True
    else:
        return False

number = int(input("Enter the nummber = "))
result = is_positive(number)

if result:
    print('Number',number,'is positive')
else:
    print('Number',number,'is negative')


