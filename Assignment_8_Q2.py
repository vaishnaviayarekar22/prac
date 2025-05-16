#Write a program which takes date as an input in the format DD / MM / YYYY (separated by /), and display each part of the date - DAY, MONTH, and YEAR. (use String split method) 

#Vaishnavi Ananda Ayarekar

#FY-B

#Roll no 132

date = input("Enter any date in the DD/MM/YYYY format = ")
date_details = date.split('/')

print('Date:',date_details[0])
print('Month:',date_details[1])
print('Year:',date_details[2])
