/*
Write a program that asks the user to enter a fraction, then reduces the fraction to lowest terms:

    Enter a fraction: 6/12
    In lowest terms: 1/2

Hint: To reduce a fraction to lowest terms, first compute the GCD of the numerator and
denominator. Then divide both the numerator and denominator by the GCD.
*/

#include <stdio.h>
int gcd(int num_1, int num_2);

int main(void)
{
    int numerator, denominator;
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    int common_divisor = gcd(numerator, denominator);
    numerator /= common_divisor;
    denominator /= common_divisor;
    
    printf("In lowest terms: %d/%d\n", numerator, denominator);
}


int gcd(int num_1, int num_2)
{
    int temp;

    while (num_2 != 0)
    {
        temp = num_2;
        num_2 = num_1 % num_2;
        num_1 = temp;
    }
    
    return temp;
}