#Write a Python program that does the following:

#Create an empty set called my_set. Add the elements 5, 10, and 15 to the set.
#Try to add the element 10 again. What happens?
#Remove the element 10 from the set.
#Try to remove the element 20 from the set. What happens?

#Vaishnavi Ananda Ayarekar

#FY-B

#Rool no 132

my_set = set()
my_set.add(5)
my_set.add(10)
my_set.add(15)
print(my_set)
my_set.add(10)
print(my_set)    #as same element is inserted by the property of set single eliment is seen ammong multiple same element
my_set.remove(10)
print(my_set)
my_set.remove(20)
print(my_set)    #Throw an error named KeyError
