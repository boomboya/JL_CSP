# JL 7th fizzbuzz 

x = 1

while x < 51:
    if x % 3 and x % 5 == 0:
        print(f"fizzbuzz")
    elif x % 3 == 0:
        print(f"fizz")
    elif x % 5 == 0:
        print(f"buzz")    
    else:
        print(x)
    x+= 1