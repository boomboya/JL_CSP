
#include <stdio.h>
#include <string.h>

int main() {
    int age;
    
    printf("how old are you? "); 
    scanf("%d", &age);
    
    if (age >=18) {
        printf("you are old enough to vote\n");
    }else if (age == 16) {
        printf("you are old enough to drive\n");
    }else if (age == 15) {
        printf("you are old enough to get a permit\n");
    }else if (age >= 5) {
        printf("you can go to school\n");
    }else {
        printf("you are not old enough to do anything here\n");
    }
    
    return 0;
}