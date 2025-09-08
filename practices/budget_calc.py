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

rent_percent = (num_two/income)*100
print("This percentage of your income goes to rent:", rent_percent)
utilities_percent = (num_three/income)*100
round(utilities_percent, 2)
print("This percentage of your income goes to utilities:", round(utilities_percent,1))
groceries_percent = (num_four/income)*100
round(groceries_percent, 2)
print("This percentage of your income goes to groceries:", round(groceries_percent))
transportation_percent = (num_five/income)*100
round(transportation_percent, 2)
print("This percentage of your income goes to transportation:", round(transportation_percent))