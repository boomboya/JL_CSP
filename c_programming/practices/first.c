// JL 7th First program
#include <stdio.h>
int main(void){
    char name[10];

    printf("Hi what is your name: ");
    
    fgets(name, 10, stdin);
    
    printf("Hello %s welcome to your first program", name);
    
    return 0;
}