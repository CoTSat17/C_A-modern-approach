/*
Write a program that asks the user to enter a two-digit number, then prints the number with
its digits reversed. A session with the program should have the following appearance:
    Enter a two-digit number: 28
    The reversal is: 82
Read the number using %d, then break it into two digits. Hint: If n is an integer, then n%10
is the last digit in n and n / 10 is n with the last digit removed.

*/

#include <stdio.h>

int main(void)
{
    // Get number 
    int first_digit;
    int second_digit;
    int third_digit;
    printf("Enter number: ");
    scanf("%1d%1d%1d", &first_digit, &second_digit, &third_digit);

    // Print number


    printf("The reversal is: %d%d%d\n", third_digit, second_digit, first_digit);
    
    return 0;
}