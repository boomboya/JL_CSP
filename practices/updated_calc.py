# JL 7th updated financial calculator

print("Hello, this is a budget calculator")

def userinfo():
    return int(input("tell me your monthly income:\n"))


rent = userinfo("rent")

utilities = 
groceries = 
transportation = 

income = userinfo("income") 

expenses = rent + utilities + groceries + transportation
print("Your income is:", income)
savings = income*.1
print("You should put this much of your income into savings:", savings)
spending = income-(expenses+savings)
print("you have this much spending money:", spending)

rent_percent = (rent/income)*100
print("This percentage of your income goes to rent:", rent_percent)
utilities_percent = (utilities/income)*100

print("This percentage of your income goes to utilities:", round(utilities_percent,1))
groceries_percent = (groceries/income)*100

print("This percentage of your income goes to groceries:", round(groceries_percent))
transportation_percent = (transportation/income)*100

print("This percentage of your income goes to transportation:", round(transportation_percent))