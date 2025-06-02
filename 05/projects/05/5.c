/*
In one state, single residents are subject to the following income tax:
Income              Amount of tax
Not over $750       1% of income
$750-$2.250         $7.50 plus 2% of amount over $750
$2.250-$3.750       $37.50 plus 3% of amount over $2,250
$3,750-$5,250       $82.50 plus 4% of amount over $3,750
$5,250-$7,000       $142.50 plus 5% of amount over $5,250
Over $7,000         $230.00 plus 6% of amount over $7,000
*/
#include <stdio.h>

int main(void)
{
    printf("Income: ");
    int income;
    scanf("%d", &income);

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



    printf("$%.2f", tax);
}