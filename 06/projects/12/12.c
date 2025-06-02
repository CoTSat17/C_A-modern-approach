/*
Modify Programming Project 11 so that the program continues adding terms until the current term becomes less than ε, 
where e is a small (floating-point) number entered by the user.
*/

#include <stdio.h>

int factorial(int value);

int main(void)
{
    printf("Define ε: ");
    float n;
    scanf("%d", &n);


    float e_value = 1, e_increment;
    int i = 1;
    do
    {
        e_increment = (float) 1 / factorial(i);
        e_value += e_increment;
        printf("%f\n", e_value); 
        i++;
    } while (e_increment >= n);


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