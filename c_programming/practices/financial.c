// JL 7th financial calculator
#include <stdio.h>
#include <math.h>

int main(void){
    float monthincome;
    float rent;
    float utilities;
    float groceries;
    float transportation;

    float rentPercentage = (rentMortgage / monthlyIncome) * 100;
    float utilitiesPercentage = (utilities / monthlyIncome) * 100;
    float groceriesPercentage = (groceries / monthlyIncome) * 100;
    float transportationPercentage = (transportation / monthlyIncome) * 100;

    float savings = monthincome - (rent + utilities + groceries + transportation);
    float savingsPercentage = (savings / monthincome) * 100;
    float spendings = monthlyincome - (rent + utilities + groceries + transportation + savings);

    
    printf("what is your monthly income: ");
    scanf("%f", &monthincome);
    while(getchar() != '\n');
    
    printf("what is your monthly rent: ");
    scanf("%f", &rent);
    while(getchar() != '\n');

    printf("what is your monthly utilities: ");
    scanf("%f", &utilities);
    while(getchar() != '\n');

    printf("what is your monthly groceries: ");
    scanf("%f", &groceries);
    while(getchar() != '\n');

    printf("what is your monthly transportation: ");
    scanf("%f", &transportation);
    while(getchar() != '\n');
    
    printf("your rent is %.2f which is %.2f%% of your income\n", rent, rentPercentage);
    printf("your utilities is %.2f which is %.2f%% of your income\n", utilities, utilitiesPercentage);
    printf("your groceries is %.2f which is %.2f%% of your income\n", groceries, groceriesPercentage);
    printf("your transportation is %.2f which is %.2f%% of your income\n", transportation, transportationPercentage);

    printf("your savings is %.2f which is %.2f%% of your income\n", savings, savingsPercentage);
    printf("your spendings is %.2f,\n", spendings);


    return 0;
}