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
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    int first_digit = number % 10;
    int second_digit = (number % 100) / 10;
    int third_digit = number / 100;
    // Print number


    printf("The reversal is: %d%d%d\n", first_digit, second_digit, third_digit);
    
    return 0;
}