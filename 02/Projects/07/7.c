/*
Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
that amount using the smallest number of $20, $10, $5, and $1 bills:
Enter a dollar amount: 93
$20 bills: 4
$10 bills: 1
$5 bills: 0
$1 bills: 3
*/

#include <stdio.h>

int bill_amount(int *money, int bill);


int main(void)
{
	// Get dollar amount 
	int amount;
	printf("Enter a dollar amount: ");
	scanf("%i", &amount);

	// For each bill calculate number needed
	bill_amount(&amount, 20);
	bill_amount(&amount, 10);
	bill_amount(&amount, 5);
	bill_amount(&amount, 1);


}


int bill_amount(int *money, int bill)
{
	// Calculate number of bills
	int num_bills = *money / bill;
	
	// Calculate remaining amount of money
	*money = *money - (bill * num_bills);

	// Print number of bills
	printf("$%i bills: %i\n", bill, num_bills);

}