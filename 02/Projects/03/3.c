#include <stdio.h>

int main(void)
{
	int radius;
	printf("Input radius: ");
	scanf("%i", &radius);
	float volume = (float) 4/3 * 3.14 * radius * radius * radius;
	
	printf("The volume is: %.2f\n", volume);
}