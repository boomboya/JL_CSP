// JL 7th Variables notes
#include <stdio.h>

int main(void){
    int grade; // 4 bytes
    float pi = 3.14; // 4 bytes
    double long_pi = 3.1415926358; // 8 bytes
    char letter_grade; // 1 byte
    char name[50];

    printf("what is your name:\n");
    fgets(name, sizeof(name), stdin);

    printf("what is your grade percentage as a whole number: ");
    scanf("%d", &grade);
    while (getchar() != '\n');

    printf("what is your letter grade: ");
    scanf(" %c", &letter_grade);

    printf("%s did it\n", name);
    printf("you have a %d, in the class. that is a %c\n", grade, letter_grade);
    
    return 0;
}


//What is the main difference between declaring variables in Python and C?
    // so it knows how much space to save

//In C, what is the purpose of specifying a data type when declaring a variable?
    //the purpose of specifying data type in c is so that it wont changeso you must be more specific with the data type

//List three common data types used in C and their corresponding format specifiers for printf().
    // intager is 4vytes u call by d float is 4bytes and you call it by f and char is 1byte amnd is called by c

//What is the difference between printf() and scanf() functions in C?
    // scanf is the user input but print f is just printing 

//How do you add comments in C? 
    // //

//What is the purpose of the #include <stdio.h> line at the beginning of a C program?
    //standard library this allows you to use inputs and outputs

//In C, what is the significance of the main() function?
    //everything must be function main is function

//What is the difference between %d and %f format specifiers in printf()?
    // d is for integar f is for float

//How do you print a newline character in C?
    // \n

//What is the purpose of the & symbol when using scanf() to get user input?
    //to tell where it should be stored

//How do you declare a constant in C? Provide an example.
    // constant marks variable so it cant be changed


