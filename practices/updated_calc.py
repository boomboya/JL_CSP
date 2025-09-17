# JL 7th updated financial calculator

print("Hello, this is a budget calculator")

def user_info():
    income = int(input("tell me your monthly income: "))
    rent = int(input("tell me your rent: "))
    utilities = int(input("tell me your utilities cost: "))
    groceries = int(input("tell me how much your groceries cost: "))
    transportation = int(input("tell me how much your transportation cost: "))
   
    return income, rent, utilities, groceries, transportation



def budget_calc(income, rent, utilities, groceries, transportation):
    expenses = rent + utilities + groceries + transportation
    savings = income * .1
    spending = income - (expenses + savings)

    rent_percent = (rent/income)*100
    utilities_percent = (utilities/income)*100
    groceries_percent = (groceries/income)*100
    transportation_percent = (transportation/income)*100
    

    print("")
    print("your rent is $" + str(rent) + " which is " + str(round(rent_percent, 2)) + "% of your income")
    print("your utilities are $" + str(utilities) + " which is " + str(round(utilities_percent, 2)) + "% of your income")
    print("your groceries are $" + str(groceries) + " which is " + str(round(groceries_percent, 2)) + "% of your income")
    print("your transportation is $" + str(transportation) + " which is " + str(round(transportation_percent, 2)) + "% of your income")
    print("")
    print("your total expenses are $" + str(expenses))
    print("your savings goal is $" + str(savings))
    print("your spending money is $" + str(spending))

