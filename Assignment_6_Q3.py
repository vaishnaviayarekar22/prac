#Write a program to find the sum of all the numbers in the list.

#Vaishnavi Ananda Ayarekar

#FY-B

#Rool no = 132

number = []

count = int(input("How many numbers Do you want in list = "))

for i in range(count):
    num = int(input("Enter the number "))        
    number.append(num)        #numbers.insert(i,num)
            
total = 0


for num in number:
    total = total + num 

print('Total is ',total)             



             
