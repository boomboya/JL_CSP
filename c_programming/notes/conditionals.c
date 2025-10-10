// JL 7th conditionals
# include <string.h>
# include <stdio.h>
/* logical operators*/

int main(void){
    int grade;
    char name[500];

    printf("what is your grade percent: ");
    scanf("%d", &grade);

    printf("what is your name: ");
    scanf("%s", &name);
    if(strcmp(name, "ms larose") ==0){
        printf("you dont get a grade!\n");
    }else if(grade >= 90){
        printf("you an A!\n");
    }else if(grade >= 80){
        printf("you an B!\n");
    }else if (grade >= 70){
        printf("you an C!\n");
    }else{
        printf("you are failing :(\n");
    }


    return 0;
}

//What puts something inside of the “if” statement?
    // a tab
//How are conditions written in C?
    // if (){}
//How do we write elif conditions in C?
    // else if ()
//When do else conditions run?
    // when everything else is false
//What are the 3 logical operators in C?
    // && and
    // || or
    // ! not
