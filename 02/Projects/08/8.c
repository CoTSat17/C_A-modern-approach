/*
Write a program that calculates the remaining balance on a loan after the first, second, and
third monthly payments:
    Enter amount of loan: 20000.00
    Enter interest rate: 6.0
    Enter monthly payment: 386.66
    Balance remaining after first payment: $19713.34
    Balance remaining after second payment: $19425.25
    Balance remaining after third payment: $19135.71
Display each balance with two digits after the decimal point. Hint: Each month, the balance
is decreased by the amount of the payment, but increased by the balance times the monthly
interest rate. To find the monthly interest rate, convert the interest rate entered by the user to
a percentage and divide it by 12.
*/

#include <stdio.h>

const int num_months = 3;


int main(void)
{
    // Get loan amount
    printf("Enter amount of loan: ");
    float loan_amount;
    scanf("%f", &loan_amount);

    // Get interest rate
    printf("Enter interest rate: ");
    float interest_rate;
    scanf("%f", &interest_rate);

    // Get payment by month
    printf("Enter monthly payment: ");
    float monthly_payment;
    scanf("%f", &monthly_payment);

    // Loop for the 3 payments
    for (int i=0; i < num_months; i++)
    {
        // Increment do to interest
        loan_amount *= (1 + interest_rate / (100 * 12));

        
        // Decrease due to payment
        loan_amount -= monthly_payment;


        // Print remaining amount
        printf("Balance remaining after %i payment: $%.2f\n",i ,loan_amount);
    }


}