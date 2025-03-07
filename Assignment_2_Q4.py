#Write a python program that promts the user to enter teh temprature in celcius and classifies it as
#Below 0 degree = Freezing
#0 degree to 20 degree = Cold
# 21 degree to 30 degree = Warm
#Over 30 degree = Hot 

#Vaishnavi Ananda Ayarekar

#FY-B

#Roll_No= 132

temprature = float(input("Enter the temprature in the degree celesius = "))

if 0 > temprature :
    print('Its freezing ')
    
elif 0 <= temprature <= 20 :
    print('Its cold ')

elif 21<= temprature <= 30 :
    print('Its Warm ')

else :
    print('Its hot')
