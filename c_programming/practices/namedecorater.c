// JL 7th name decorater
#include <stdio.h>
#include <string.h>

char name[50];
int main() {
    printf("Hi I am a name decorator! what is your first name:\n");

    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = 0;

    printf("welcome %s\n", name);
    printf("this is your decorated name <<<%s>>>\n", name);
    
    return 0;
}

