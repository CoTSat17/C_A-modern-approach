#include <stdio.h>

int main(void)
{
	int radius = 10;
	float volume = (float) 4/3 * 3.14 * radius * radius * radius;
	
	printf("The volume is: %.2f\n", volume);
}