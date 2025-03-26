#Bug Collector
#A bug collector collect bugs every day for seven days. Write a program to find the total number of bugs collected during the seven days. The loop should ask for the number of bugs collected for each day, and when the loop is finished the program should display the total number of bugs collected. 
# Vaishnavi Ananda Ayarekar

# FY- B

#Roll_no = 132
total_bugs= 0
for i in range(7):
    day = i+1
    print('Day',day)
    collected_bugs= int(input('Enter the bugs collected on these days = '))
    total_bugs = total_bugs+ collected_bugs
print('Total collected bugs are',total_bugs)
  
