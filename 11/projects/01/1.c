/*
Modify Programming Project 7 from Chapter 2 so that it includes the following function:

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

The function determines the smallest number of $20, $10, $5 and $1 bills necessary to pay the amount represented by the dollars parameter. 
The twenties parameter points to a variable in which the function will store the number of $20 bills required. 
The tens, fives and ones parameters are similar.
*/


#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);



int main(void)
{
	// Get dollar amount 
	int amount;
	printf("Enter a dollar amount: ");
	scanf("%i", &amount);

	// For each bill calculate number needed
    int twenties, tens, fives, ones;
    pay_amount(amount, &twenties, &tens, &fives, &ones);
    printf( "The bills Are\n"  
            "\t 20:\t %d\n"
            "\t 10:\t %d\n"
            "\t 5:\t %d\n"
            "\t 1:\t %d\n", twenties, tens, fives, ones);


}


void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
    // Calc 20s
    *twenties = dollars / 20;
    dollars %= 20;
    // Calc 10s
    *tens = dollars / 10;
    dollars %= 10;
    // Calc 5s
    *fives = dollars / 5;
    dollars %= 5;
    // Calc 20s
    *ones = dollars;

}
