//JL 7th time of day
#include <stdio.h>

int main(void){

    int time;
    printf("what time is it in military time?: ");
    scanf("%s", &time);


    if (time >= 1700){
        printf("the time is: {time}, good evening");
    }else if (time >= 1000){
        printf("the time is: {time}, good afternoon");
    }else {
        printf("the time is: {time}, good morning");
    }

return 0;
}
