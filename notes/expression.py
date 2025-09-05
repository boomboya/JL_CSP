# JL 7th expressions notes

#what is an algorithm?
    #set of instructions to complete task
name = input("what is your name:\n")
print("hello", name)

#treyson has 12 apples, he has 5 friends that he wants to give apples to. How many apples does each friend get?

apples = 12
friends= 5
print("each friend gets", apples/friends, "apples")

#steps in algorithim 
    #1 variables (get info needed)
    #2 do equations - do the things
    #3 display results

    #average age of a group of 4 people
age_one = 4
age_two = 6
age_three = 5
age_four = 3

total_ages = age_one + age_two + age_three + age_four
average = total_ages/4

print("the average age is:", average)

 # list all of the different mathematical operators (give me symobol and what it does)\
num_one = int(input("tell me a number:\n"))
num_two = float(input("tell me another number:\n"))
num_one += num_two
print("addition(+):", num_one)
num_one -= num_two
print("subtraction(-):", num_one)
num_one *= num_two
print("mutliplcation(*):", num_one)
num_one /= num_two
print("division(/):", round(num_one, 2)) 
num_one **= num_two

# round(number to round, number of decimal places)

print("exponets(**):", num_one)
num_one //= num_two
print("integer division(//):", num_one)
num_one %= num_two
print("modulo(%):", num_one)

#integer division will only give you the whole number when dividing
#floats in program are numbers with decimals
#modulo gives left over amounts of the division

#why do we need to do expressions
    #programming is math logic but without numbers