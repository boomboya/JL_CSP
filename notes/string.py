# JL 7th String notes

print("I did it")

 #a set of symbols held together by quatation marks "content of string" or 'contnt of string'
    #examples

first_name = input("what is your first name:\n").strip().title()

last_name = input("what is your last name:\n").strip().title()

sentence = '          the quick brown fox jumps over the lazy dog.     '.strip()

print(sentence.find("jumps"))
print(sentence[20:25])
print(sentence[sentence.find("lazy"): len("lazy")])

full_name = first_name + " " + last_name

print("welcome to my program", full_name + "!")

   # we need strings to make sentnces and stuff

# stupid proofing and sanitization relate to eachother because sanitization is step one to stupid proofing which is making it so a user can't break code

# debugging is the process of fixing your program
   # syntax error - mistake in grammer. tabs, mispelling, forgetting stuff, fix it by fixing spelling
   # logic error - mistake in the logic of code fix it by fixing your code
   #run time error - when everything looks fine but it still breaks fix it by fixing what it says is the problem

# an index is the specific location of an item in a string count them by starting with 0
#slicing is chopping our string into little bits

#what these methods mean
   #find is when you find where a specific thing is in a string
   #contrate is when you add something into a string 
   #upper makes everything into upper case
   #lower makes everything into lower case
   #strip gets rid of things in string