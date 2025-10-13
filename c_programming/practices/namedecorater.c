// JL 7th name decorater
#include <stdio.h>
#include <string.h>

///char name[50];
//int main() {
    //printf("Hi I am a name decorator! what is your first name:\n");

    //fgets(name, sizeof(name), stdin);


    //strcat(name, " ");

    //printf("welcome %s\n", name);
    //printf("this is your decorated name <<<%s>>>\n", name);
    
    ///return 0;
//}

#include <stdio.h>
#include <string.h>

int main(void){
    char name[50];
    char decorater[3];


     printf("Hi I am a name decorator! what is your first name:\n");

    scanf("%s", name);

    printf("what do you want your name to be decorated with? three charcters:\n");
    char name[25];
    printf("Tell me your name: \n");
    scanf("%s", name);
    char decor[3];
    printf("[%s]\n", decor);
    strcat(decor, name);
    printf("[%s]\n", decor);

    printf("%c", name[0]);
    name[0] = 'R';

    strcat(decor, " ");
    printf("[%s]\n,", decor);
    
    strcat(full_name, last_name);
    printf("[%s]\n", full_name);





    return 0;
}