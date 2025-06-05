/*
Modify the repdigit.c program of Section 8.1 so that it prints a table showing how
many times each digit appears in the number:
    Enter a number: 41271092
    Digit:          0 1 2 3 4 5 6 7 8 9
    Occurrences:    1 2 2 0 1 0 0 1 0 1
*/

#include <stdio.h>

int main(void)
{
    printf("Enter a number: ");
    int n, current_digit;
    scanf("%d", &n);


    int digit_occurrences[10] = {0};

    while (n > 0)
    {
        current_digit = n % 10;
        digit_occurrences[current_digit]++;
        n /= 10;
    }
    
    // Print digits
    printf("Digits:\t\t");
    for (int i = 0; i < 10; i++)
    {
        printf("   %d", i);
    }
    printf("\n");

    // Print occurrences
    printf("Occurrences:\t");
    for (int i = 0; i < 10; i++)
    {
        printf("   %d", digit_occurrences[i]);
    }
    printf("\n");
}