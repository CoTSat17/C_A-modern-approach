/*
Modify the repdigit.c program of Section 8.1 so that it shows which digits (if any)
were repeated:
    Enter a number: 939577
    Repeated digit(s): 7 9
*/

#include <stdio.h>

int main(void)
{
    printf("Enter a number: ");
    int n, current_digit;
    scanf("%d", &n);

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