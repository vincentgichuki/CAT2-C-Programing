#include <stdio.h>

int main(){
    int hours_worked;
    float hourly_wage, gross_pay, taxes, net_pay;

    //User input
    printf("Enter the hours worked in a week: ");
    scanf("%d", &hours_worked);
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);

    //condition
    //For any overtime
    if (hours_worked > 40)
    {
        hourly_wage = hourly_wage * 1.5;
    }
    
    gross_pay = hourly_wage * hours_worked;
    taxes = (15 * 600)/100 + (20 * (gross_pay-600))/100;
    net_pay = gross_pay - taxes;

    //Print output
    printf("Gross pay: %f \n", gross_pay);
    printf("Taxes: %f \n", taxes);
    printf("Net pay: %f \n", net_pay);

    return 0;
}