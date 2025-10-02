# JL 7th Function notes


# What a function is
    # a collection of code to complete a certain task
print()
input()

def welcome():
    name = input("what is your name?")
    print(f"hello, {name}!")

print("this is not in my function")
#welcome()
#welcome()
#welcome()

def add(number, number_two):
    number += num_two
    print(number)

num_one = 12
num_two = 4

#add(80, 8)
#add(3, 6)
#add(11, 71)
#add(num_one, num_two)

import random

def roll(mod):
    return random.randint(2, 18) + mod
strength = roll(0)
dextarity = roll(1)
intellegence = roll(1)
charisma = roll(0)
print("here are your stats!")
print(f"strength: {strength}\nDex: {dextarity}\nInt: {intellegence}\nChar: {charisma}")

#Why we use functions
    #what performs tasks

#What parameters and arguments are
    #a parameter is a variable that only exsist inside of the function and an arguement is when its called upon

#What return statements are
    #A command that exits a function and sends a value back to it
