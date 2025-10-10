// JL 7th string notes

#include <stdio.h>
#include <string.h>

int main(void){
    char name[]="jovie";

    char last_name[25];
    printf("Tell me your last name: \n");
    scanf("%s", last_name);
    char full_name[50];
    printf("[%s]\n", full_name);
    strcat(full_name, name);
    printf("[%s]\n", full_name);

    printf("%c", last_name[0]);
    last_name[0] = 'R';

    strcat(full_name, " ");
    printf("[%s]\n,", full_name);
    
    strcat(full_name, last_name);
    printf("[%s]\n", full_name);

    printf("Your name is %s %s", name, last_name);


    return 0;
}



//What is the difference between a string and a character?
//: char can only hold one strings can hold multiple
//What types of quotation marks do we need for a string?
//:double quotes and single marks for single characters
//What library do we need to include to access the string functions in C?
//: #include <string.h>
//List functions the library allows us to use.
//: ("%zu", strlen(name));  ("%zu", sizeof(name));
//How do we concatenate strings in C?
//: strcat
//How do we get individual characters from a string in C?
//: we call from a list
