// JL 7th expression notes
#include <stdio.h>
#include <math.h>

int main(void){
    int year = 2025;
    float pi = 3.14;
    double long_pi = 3.14159265;

    printf("%d", year);
    printf("%f.2\n", 8.0/3);
    printf("%d\n", 8/3);
    printf("%d\n", (int) pow(2, 4));

    year += 1; //compound assighnment operator
    printf("%d\n", year);
    year++; //incrimentor
    printf("%d\n", year);

    return 0;
}

//What is the difference between an integer and a float in C?\
    //integar is who number and floa is decimal

//How does C handle integer division compared to float division?
    // it returns math in whole number

//List the arithmetic operators available in C and their functions.
    // addition adds the numbers
    // subtraction subtracts the second number to the first
    // multiplication multiplys them
    // division divdes first number by second
    // modulus remainder after division

//What is the modulus operator, and how is it used?
    //remainder of a mathh problem

//How do you round a float to the nearest integer in C?
    //function <matyh.h> normally used
//What is type casting in C? Provide an example of explicit type casting.
    //process converting one data too another
//How do compound assignment operators work in C? List three examples.
    // shortcut for math operations
    // +=
    // -=
    // *=
//What is the purpose of the math.h library? Name three functions it provides.
    //provide collection of functions
//How do you print a float with a specific number of decimal places using printf()?
    // %f
//What happens when you mix integer and float operations in C?
    //implicts a type of conversation