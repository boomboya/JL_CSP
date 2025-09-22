# JL 7th loop notes

#How do you make lists in python? 
foods = ["chocolate", "pasta", "brownies", "cookies", "garlic bread", "fajitas"]

#What is a loop? repeat the code inside them for a spesified amount of times
#What are the two types of loops? a for loop is normally used for list and while loops

#How do you make for loops in python? 
for food in foods:
    print(f"{food} is my favorite food")

for x in range(1,20):
    print(x)

#How do you make while loops in python?

i = 1

while i <= 20:
    print(i)
    i+= 1

x = 1

while x < 21:
    if x % 2 == 0:
        print(f"{x} is an even numeber")
    else:
        print(f"{x} is an odd number")    
    x+= 1

import random

d = 1
end = random.randint(1,20)

#while d != end:
    #print("duck")
    #d += 1

#print("goose")

while True:
    if d == end:
        print("goose")
        break
    else:
        print("duck")
        d += 1


#i = 0
#while True:
    #print(i)
    #i += 1
    # an infinite loop is a loop that goes on forever (one of three steps is missing)


#What is iteration? repition of the same code


