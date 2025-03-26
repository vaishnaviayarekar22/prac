#Write a program to calculate total and average scores for each student's marks. You should take the total number of students and the number of subjects per student from the user.

#Vaishnavi Ananda Ayarekar

#FY-B

#Roll No = 132


no_of_students = int(input("Enter the no of student = "))
no_of_subjects = int(input("Enter the no of subjects = "))
total = 0

for student in range(no_of_students):
    print('Student',student+1)
    
    for subject in range(no_of_subjects):
        print('Subject',subject+1)
        marks = int(input("Enter the marks ="))
        total = total+ marks
    percentage = total / no_of_subjects
    print('The total marks are',total,'and the percentage is',percentage) 
    total = 0
