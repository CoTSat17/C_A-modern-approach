/*
Write a program that asks the user for a two-digit number, then prints the English word for the number:

    Enter a two-digit number: 45
    You entered the number forty-five.

Hint: Break the number into two digits. Use one switch statement to print the word for the
first digit ("twenty," "thirty," and so forth). Use a second switch statement to print the
word for the second digit. Don't forget that the numbers between 11 and 19 require special
treatment.
*/

#include <stdio.h>

int main(void)
{
    printf("Enter a two-digit number: ");
    int number;
    scanf("%d", &number);

    if (number <= 19 && number >= 11)
    {
        switch (number)
        {
        case 11:
            printf("Eleven\n"); break;
        case 12:
            printf("Twelve\n"); break;
        case 13:
            printf("Thirteen\n"); break;
        case 14:
            printf("Fourteen\n"); break;
        case 15:
            printf("Fifteen\n"); break;
        case 16:
            printf("Sixteen\n"); break;
        case 17:
            printf("Seventeen\n"); break;
        case 18:
            printf("Eighteen\n"); break;
        case 19:
            printf("Nineteen\n"); break;
        }
    }

    else
    {
        int first_digit = number / 10;
        int second_digit = number % 10;

        // First digit
        switch (first_digit)
        {
        case 1:
            printf("Ten"); break;
        case 2:
            printf("Twenty-"); break;
        case 3:
            printf("Thirty-"); break;
        case 4:
            printf("Fourty-"); break;
        case 5:
            printf("Fifty-"); break;
        case 6:
            printf("Sixty-"); break;
        case 7:
            printf("Seventy-"); break;
        case 8:
            printf("Eighty-"); break;
        case 9:
            printf("Ninety-"); break;
        }

        // Second digit
        switch (second_digit)
        {
        case 1:
            printf("One\n"); break;
        case 2:
            printf("Two\n"); break;
        case 3:
            printf("Three\n"); break;
        case 4:
            printf("Four\n"); break;
        case 5:
            printf("Five\n"); break;
        case 6:
            printf("Six\n"); break;
        case 7:
            printf("Seven\n"); break;
        case 8:
            printf("Eight\n"); break;
        case 9:
            printf("Nine\n"); break;
        }
    }
}