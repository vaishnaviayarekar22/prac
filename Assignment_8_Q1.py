#write a program to count the number of times the letter T (uppercase of lowercase) appears in a string. 

#Vaishnavi Ananda Ayarekar

#FY-B 

#Roll no 132

string = input('Enter any string = ')
count = 0

for ch in string:
    if ch =='T' or ch == 't':
        count = count+1
print('Number of T or t in the given string is',count)
