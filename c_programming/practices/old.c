// JL 7th Old enough 
#include <stdio.h>

int main(void){
    int age;
    printf("what is your age: ");
    scanf("%s", &age);


    if(age>= 18){
        printf("you can vote!\n");
    }else if(age >= 16 && age <18){
        printf("you can drive!\n");
    }else if(age == 15){
        printf("you can get learners permit!\n");
    }else if (age >= 4 && age<15){
        printf("you can go to school!\n");
    }else{
        printf("you cant do anything\n");
    }

return 0;
}
