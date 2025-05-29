#include <stdio.h>
int calc_exponent(int exponent, int x);

int main(void)
{
	// Get x value
	int x;
	scanf("%i", &x);

	// Calculate polynomial
	int result = 3*calc_exponent(5, x) + 2*calc_exponent(4, x) - 5*calc_exponent(3, x) - calc_exponent(2, x) + 7*x -6;
	printf("Result: %i\n", result);


}




int calc_exponent(int exponent, int x)
{
	int result = x;
	for (int i=0; i < exponent - 1; i++)
	{
		result *= x;
	}
	return result;
}