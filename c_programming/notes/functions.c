//JL 7th function notes
#include <stdio.h>

void birthday(char* name, int age){
    printf("happy birthday to you!\n");
    printf("happy birthday to you!\n");
    printf("happy birthday dear %s!\n", name);
    printf("happy birthday to you!\n");
    printf("happy birthday to %s you are %d!\n", name, age);

}

int mul( int x, int y){
    return x *y;
}

float get_number(char* type){
    float value;
    printf("how many %s do you have: ", type);
    scanf("%f", &value);
    return value;
}

int main(void){
    
    birthday("meee", 15);
    birthday("gwen", 14);
    birthday("hannah", 15);
    int product = mul(8,5);
    printf("%d\n", product);
    printf("%d\n", mul(4,6));
    float pencils = get_number("pencils");
    float notebooks = get_number("notebooks");
    printf("you have %.2f pencils and %.2f notebooks", pencils, notebooks);



    //printf("happy birthday to you!\n");
   // printf("happy birthday to you!\n");
    //printf("happy birthday dear meee!\n");
   // printf("happy birthday to you!\n");
   // printf("happy birthday to me you are 14!\n");

   // printf("happy birthday to you!\n");
   // printf("happy birthday to you!\n");
   // printf("happy birthday dear meee!\n");
   // printf("happy birthday to you!\n");
   // printf("happy birthday to me you are 14!\n");

   /// printf("happy birthday to you!\n");
  // printf("happy birthday to you!\n");
   // printf("happy birthday dear meee!\n");
    //printf("happy birthday to you!\n");
    //printf("happy birthday to me you are 14!\n");

    return 0;
}







//What a function is
    //a piece of code that can be reused
//Why we use functions
    // to performs tasks
//How to write a function in c
    //float get_number(char* type){}
//What are arguments and parameters?
    //a parameter is a variable that only exsist inside of the function and an arguement is when its called upon
//How do arguments and parameters work together?
    //you call on the variable only inside a function
//How to use parameters and arguments in C
    // birthday("meee", 15);
//What are return statements?
    //A command that exits a function and sends a value back to it
//What do return statements do with the information?
    //it returns 
