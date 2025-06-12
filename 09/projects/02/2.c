/*
Modify Programming Project 5 from Chapter 5 so that it uses a function to compute the
amount of income tax. When passed an amount of taxable income, the function will return
the tax due.
*/

#include <stdio.h>

float calculate_tax(int income);

int main(void)
{
    printf("Income: ");
    int income;
    scanf("%d", &income);




    printf("$%.2f", calculate_tax(income));
}

float calculate_tax(int income) {

    float tax;
    if (income < 750)
    {
        tax = income * 0.01;
    }
    else if (income < 3750)
    {
        tax = 37.5 + 0.03 * (income - 2250);
    }
    else if (income < 5250)
    {
        tax = 82.5 + 0.04 * (income - 3750);
    }
    else if (income < 7000)
    {
        tax = 142.5 + 0.05 * (income - 5250);
    }
    else 
    {
        tax = 230 + 0.06 * (income - 7000);
    }

    return tax;
}




