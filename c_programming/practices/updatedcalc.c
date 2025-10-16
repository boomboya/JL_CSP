// JL 7th u[dated financial calculator
#include <stdio.h>
#include <math.h>



float get_number(char* type){
    float value;
    printf("what is your monthly %s: ", type);
    scanf("%f", &value);
    return value;
}

void print(char* type, float expense, float income){
    printf("your %s is %.2f which is %.0f%% of your income\n", type, expense, (expense/income) * 100.0);
}
int main(void){
    
    float Income = get_number("Income");
    float rent = get_number("rent");
    float utilities = get_number("utilities");
    float groceries = get_number("groceries");
    float transportation = get_number("transportation");
     
    
    print("rent", rent, Income);
    print("utilities", utilities, Income);
    print("groceries", groceries, Income);
    print("transportation", transportation, Income);
    
    return 0;
}