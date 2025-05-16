#4) Password Check

#Write a program to check whether a given password is valid or not based on the following conditions - 
#A valid password must be at least 7 characters in length
#Contains at least one upper case letter
#Contains at least one lower case letter
##Contains at least one digit

#Vaishnavi Ananda Ayarekar
#F.Y.BTech(DSE)
#B-132

password = input("Enetr your password:")

length=False
upper=False
lower=False
digit=False

if len(password)>=7:
    length=True

for ch in password:
    if ch.isupper():
        upper=True

    if ch.islower():
        lower=True

    if ch.isdigit():
        digit=True

if length and upper and lower and digit:
    print("Your Password is valid")
else:
    print("Your Password is invalid")


      
      




