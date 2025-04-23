#Write a Python program that does the following:

#Create a dictionary (with user input):
#Ask the user how many students' data they want to enter.
#For each student, ask the user to enter the student's name and percentage.
#Store the student's name as the key and their percentage as the value in a dictionary.
#Get user input (for search):
#After creating the dictionary, ask the user to enter a student's name to search for.
#Display the percentage:
#If the entered name is found in the dictionary, display the student's percentage.
#If the entered name is not found in the dictionary, display a message like "Student name not found."


#Vaishnavi Ananda Ayarekar

#FY-B

#Roll no 132



count = int(input("Enter The no of students = "))
student_records = {}

for i in range(count):
    print('Students :',i+1)
    Name = input("Enter the name of student = ")
    percentage = float(input("Enter the percentage of student =" ))
student_records[Name]=percentage
choice = 1
while choice==1:
    Name = input("Enter any name to search in the dictionary =")
    if Name in student_records:
        print(Name,'=',student_records[Name])
    else :
        print("Student Name not Found ")
    choice =int(input("Do you want to continue(1 for YES and 0 for NO)"))


