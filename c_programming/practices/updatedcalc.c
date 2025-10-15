// JL 7th financial calculator
#include <stdio.h>
#include <math.h>

float get_number(char* type){
    float value;
    printf("how many %s do you have: ", type);
    scanf("%f", &value);
    return value;
}


int main(void){
    float monthlyincome;
    float rent;
    float utilities;
    float groceries;
    float transportation;

   
    printf("what is your monthly income: ");
    scanf("%f", &monthlyincome);
      
    printf("what is your monthly rent: ");
    scanf("%f", &rent);
    
    printf("what is your monthly utilities: ");
    scanf("%f", &utilities);
    
    printf("what is your monthly groceries: ");
    scanf("%f", &groceries);

    printf("what is your monthly transportation: ");
    scanf("%f", &transportation);
   

    printf("Your rent is %.2f and that is %.0f%% of your income.\n", rent, (rent / monthlyincome) * 100.0);
    printf("your utilities is %.2f which is %.0f%% of your income\n", utilities, (utilities / monthlyincome) * 100.0);
    printf("your groceries is %.2f which is %.0f%% of your income\n", groceries, (groceries / monthlyincome) * 100.0);
    printf("your transportation is %.2f which is %.0f%% of your income\n", transportation, (transportation/monthlyincome) * 100.0);
    
    float savings = monthlyincome*0.1;
    
    float spendings = monthlyincome - (rent + utilities + groceries + transportation + savings);
    
    printf("you should save %.2f which is %.0f%% of your income\n", savings, (savings/monthlyincome) * 100.0);
    printf("your spending money is %.2f,\n", spendings);


    return 0;
}