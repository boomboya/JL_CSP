# JL 7th updated financial calculator

print("Hello, this is a budget calculator")

def user_info(prompt):
    value = float(input(prompt))
    return value

def calc_percent(income, expense):
    return (expense / income) * 100

def main():
    income = user_info("What is your monthly income?: $")
    rent = user_info("What is your rent?: $")
    groceries = user_info("What is your food cost?: $")
    utilities = user_info("What is your utilities cost?: $")
    transportation = user_info("What is your transportation cost?: $")

    print("Here is your percentages of income spent on each category: ")
    print("Rent: " + str(round(calc_percent(income, rent), 2)) + "%")
    print("Groceries: " + str(round(calc_percent(income, groceries), 2)) + "%")
    print("Utilities: " + str(round(calc_percent(income, utilities), 2)) + "%")
    print("Transportation: " + str(round(calc_percent(income, transportation), 2)) + "%")

    total_expenses = rent + groceries + utilities + transportation 
    savings_goal = income * 0.1
    spending_money = income - (total_expenses + savings_goal)   
   
    print("Total Expenses: $" + str(total_expenses))
    print("Savings Goal (10% of income): $" + str(savings_goal))
    print("Spending Money: $" + str(spending_money))

main()