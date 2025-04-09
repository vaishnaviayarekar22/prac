#Write a program to find the largest number in the list.


#Vaishnavi Ananda Ayarekar

#FY-B


#Roll no =132


number = []
count = int(input('How many nubers do you insert in the list = '))

for i in range(count):
    num = int(input('Enter thr number ='))
    number.append(num)

max = 0
for num in number :
    if num >= max:
        max = num

print('Max is' ,max)



