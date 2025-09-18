# JL 7th conditionalds notes

#homework_done = input("is your homework done: ").strip().capitalize()

#if homework_done == "yes":
   # print("yes you can go")
#else:
    #print("then go do your homework")
    
grade = 1000

if grade >= 90:
    if grade > 100:
        print("not possible")
    else:
        print(f"you have {grade}% that is a A")
elif grade >= 80:
     print(f"you have {grade}% that is an b")
elif grade >= 70:
    print(f"you have {grade}% that is a c")
else:
    print(f"you have a {grade}% that is a c or lower :(")


name = input("what is your name: ")

if name == "ms larose":
    print("you are the teacher")
elif name == "tia" or name == "ashley":
    print("you are the ta")
else:
    print(f"hello {name}, you are a student")

#What puts something inside of the “if” statement? an indent

#What do if statements do?, check if statements true or false

#What are boolean statements?, always result in true or false ex if homework_done == "no":

# two equal signs is a command or a question asking if its equal one equal sign is a variable

#What do else statements do? if its false or the option if the first thing isn't true

#What kind of statement do you use if you have more than 2 needed outcomes? elif

#What do each of the different symbols mean in conditionals?
#< less than
#> grater than
#<=less than or equal to
#>= greater than or equal to
#== two equal signs is a command or a question asking if its equal one equal sign is a variable
#! not equal to

#What are the 3 logical operators? and, or, or not
#What are logical operators for? allow us to combine conditional statements
#What does a nested conditional statement do? runs only when the statemnet above is true
