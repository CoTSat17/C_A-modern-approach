#include <stdio.h>

int main(void)
{
	// Get the amount
	printf("Enter an amount: ");
	float amount;
	scanf("%f", &amount);
	
	// Calculate 5% tax
	float amount_with_tax = amount * 1.05;

	// Print tax
	printf("With tax added: %.2f\n", amount_with_tax);
}