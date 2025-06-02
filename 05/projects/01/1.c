/*
Write a program that calculates how many digits a number contains:

    Enter a number: 374
    The number 374 has 3 digits

You may assume that the number has no more than four digits. Hint: Use if statements to
test the number. For example, if the number is between 0 and 9, it has one digit. If the number is between 10 and 99, it has two digits.
*/

#include <stdio.h>

int main(void)
{
    printf("Enter a number: ");
    int number;
    scanf("%d", &number);

    if (number / 1000 >= 1)
    {
        printf("The number %d has 4 digits\n", number);
    }
    else if (number / 100 >= 1)
    {
        printf("The number %d has 3 digits\n", number);
    }
    else if (number / 10 >= 1)
    {
        printf("The number %d has 2 digits\n", number);
    }
    else
    {
        printf("The number %d has 1 digits\n", number);
    }
}