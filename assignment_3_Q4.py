#Budget Analysis
#Write a program that asks the user to enter the amount that he or she has budgeted for a month. A loop should then prompt the user to enter each of his or her expenses for the month, and keep a running total. When the loop finishes, the program should display the amount that the user is over or under budget. 


#Vaishnavi Ananda Ayarekar

#FY-B

#Roll_no = 132


budget = float(input("Enter your budget = "))
total_expenses = 0
choice = 1
while choice == 1:
    expenses = float(input("Enter your expenses = "))
    total_expense = total_expenses + expenses
    choice = int(input('Enter your choice ( 1 for  YES and 0 for NO =)'))

balence = budget - total_expenses

if balence >budget:
    print('You are over budget ')
else :
    print('Your are under budget')

