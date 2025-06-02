/*
The value of the mathematical constant e can be expressed as an infinite series:
    e = 1 + 1/1! + 1/2! + 1/3! + ...
Write a program that approximates e by computing the value of
    1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
where n is an integer entered by the user.
*/

#include <stdio.h>

int factorial(int value);

int main(void)
{
    printf("Define n: ");
    int n;
    scanf("%d", &n);


    float e_value = 1;
    for(int i=1; i<=n; i++)
    {
        e_value += (float) 1 / factorial(i);
        printf("%f\n", e_value); 
    }
}


int factorial(int value)
{
    if (value == 0)
    {
        return 1;
    }

    value *= factorial(value - 1);
    
    return value;

}