#Write a Python program to demonstrate the use of the following functions from math module -

#sqrt
#ceil
#floor
#log
#sin
#cos

#Vaishnavi Ananda Ayarekar                                                                                                                                                                   

#FY-B 

#Roll no 132
import math
num = float(input("Enter the number to find its square root ="))
square_root = math.sqrt(num)   #return the square root of the number
print("Square root is ",square_root)


num2 = float(input("Enter the number for ceiling = "))    #return the round up value of the entered number 
ceiling = math.ceil(num2)
print("The ceil of entered number is ",ceiling )

num3 = float(input("Enter the number whose floor you want = "))   # return the  round down value of the entered number
flooring = math.floor(num3)
print("The floor of entered number is",flooring)

num4 = float(input("Enter the number whose log you want = "))  #return the natural log to base 10 value of the entered number
log = math.log(num4)
print("The log of entered number is ",log)


angle = float(input("Enter the angle in degree to find sin and cosine value = "))  #return the sin and cos values for angle in radians
angle_radians = math.radians(angle)
sin = math.sin(angle_radians)
cosine = math.cos(angle_radians)
print("The sin value of angle is",sin)
print("The cosine value of angle is ",cosine)
