#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    srand(time(NULL));
    char fam[][15] = {"alex", "katies","andrew", "tia"};
    for(int i= 0; i<5; i++){
        int num = rand() % 67 +1;
        printf("our random number is %s\n", fam[num]);
    
    }

    return 0;
    }