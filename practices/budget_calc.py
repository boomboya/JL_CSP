# JL 7th budget calculator

print("Hello, this is a budget calculator")

num_one = int(input("tell me your monthly income:\n"))
num_two = int(input("tell me your rent:\n"))
num_three = int(input("tell me your utilities cost:\n"))
num_four = int(input("tell me how much your groceries cost:\n"))
num_five = int(input("tell me how much your transportation cost:\n"))

income = num_one 
expenses = num_two + num_three + num_four + num_five
print("Your income is:", income)
savings = income*.1
print("You should put this much of your income into savings:", savings)
spending = income-(expenses+savings)
print("you have this much spending money:", spending)
