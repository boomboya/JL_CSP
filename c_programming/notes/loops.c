// JL 7th loops notes

#include <stdio.h>

int main(void){
    int nums[] = {1,654,4,56,8,742,5};
    char candies[][20] = {"kitkat", "skittles", "nerds", "hershey", "reeses"};

    for(int x = 0; x < 7; x++){
        printf("%d\n", nums[x]);
    }

    for(int i = 0; i<5; i++){
        printf("%s, is my favorite candy!\n", candies[i]);
    }

    for(int num = 1; num <11; num++){
        printf("%d\n", num);
    }

    int num = 0;
    while(num < 11){
        printf("%d\n", num);
        num++;
    }

    return 0;
}

//What is a loop? 
    //something that repeats
//What are the two types of loops?
    // for loop and while
//What is iteration
    // the times it repeats
//What are arrays? 
    // a list
//How do you make lists in C? 
    // using {}
//How do you make for loops in C? 
    //for(int num = 1; num <11; num++){
//How do you make while loops in C?
    // same as for loop basically while(num < 11){}