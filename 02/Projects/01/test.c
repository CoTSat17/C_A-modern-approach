#include <stdio.h>

void spaces_print(int num_spaces);




const int HEIGHT = 6;
const int L_HEIGHT = 3;


int main(void)
{
	// Print the part where there only is one astherisc per line.
	for (int i = 0; i < (HEIGHT - L_HEIGHT); i++) // Loop for each line
	{
		// Print spaces before the astherisc
		spaces_print(HEIGHT + L_HEIGHT - i - 2);
		// Print astheric and new line
		printf("*\n");
	}

	// Print the part where there are 2 astheriscs
	for (int i = 0; i < (L_HEIGHT -1); i++) // Loop for each line
	{
		// Print spaces before the first astherisc
		spaces_print(i);
		// Print first astherisc
		printf("*");

		// Print spaces between astheriscs
		spaces_print(L_HEIGHT - i*2);

		// Print second astherisc and new line
		printf("*\n");

	}

	// Print last astherisc
	spaces_print(L_HEIGHT - 1);
	printf("*\n");

}






void spaces_print(int num_spaces)
{
	for (int spaces = 0; spaces < num_spaces; spaces++)
	{
		printf(" ");
	}
}