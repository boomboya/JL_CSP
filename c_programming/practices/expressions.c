// JL 7th Expressions practice
#include <stdio.h>
#include <math.h>


int main(void){

    int return1 = 7-24/8*4+6;
    int return2 = 18/3-7+2*5;
    int return3 = 6*4/12+72/8-9;
    int return4 = (17-6/2)+4*3;
    int return5 = -2*(1*4-2/2)+(6+2-3);
    int return6 = -1*((3-4*7)/5)-2*24/6;
    int return7 = (3*pow(5, 2)/15)-(5-pow(2, 2));
    int return8 = (pow(1, 4)*pow(2, 2)+pow(3, 3))-pow(2, 5)/4;
    int return9 = pow((22/2-2*5), 2)+pow((4-6/6),2);
    

 
    printf("7-24/8*4+6=, %d\n", return1);
    printf("18/3-7+2*5=, %d\n", return2);
    printf("6*4/12+72/8-9=, %d\n", return3);
    printf("(17-6/2)+4*3=, %d\n", return4);
    printf("-2*(1*4-2/2)+(6+2-3)=, %d\n", return5);
    printf("-1*((3-4*7)/5)-2*24/6=, %d\n", return6);
    printf("(3*5**2/15)-(5-2**2)=, %d\n", return7);
    printf("(1**4*2**2+3**3)-2**5/4=, %d\n", return8);
    printf("(22/2-2*5)**2+(4-6/6)**2=, %d\n", return9);

    return 0;
}