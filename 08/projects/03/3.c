/*
Modify the repdigit.c program of Section 8.1 so that the user can enter more than one
number to be tested for repeated digits. The program should terminate when the user enters
a number that's less than or equal to 0.
*/


#include <stdio.h>

int main(void)
{   
    while (1) 
    {
        printf("\nEnter a number: ");
        int n, current_digit;
        scanf("%d", &n);
        if (n == 0)
            break;

        printf("Repeated digits: ");

        int repeated_digit[10] = {0};

        while (n > 0)
        {
            current_digit = n % 10;
            // Check if the number is repeated
            if (repeated_digit[current_digit] == 1)
            {
                printf(" %d,", current_digit);
                repeated_digit[current_digit]++; // Aument so that the value != 1 and doesnt print again
            }
            else
            {
                // If its not repeated, change the array to indicate that the digigit has already appeared
                repeated_digit[current_digit]++;
            }

            n /= 10;
            
        }
    } 
    
}