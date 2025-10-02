# JL 7th time of day


time = int(input("what time is it in military time?: "))



if time >= 1700:
        print(f"the time is: {time}, good evening")
elif time >= 1000:
     print(f"the time is: {time}, good afternoon")
elif time >= 100:
    print(f"the time is: {time}, good morning")
