#include <stdio.h>
int calc_exponent(int exponent, int x);

int main(void)
{
	// Get x value
	int x;
	scanf("%i", &x);

	// Calculate polynomial
	int result = ((((3*x +2)*x - 5)*x - 1)*x + 7)*x -6;
	printf("Result: %i\n", result);


}



