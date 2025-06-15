/*
Modify Programming Project 3 from Chapter 6 so that it includes the following function:

void reduce(int numerator, int denominator,
            int *reduced_numerator, int *reduced_denominator);


numerator and denominator are the numerator and denominator of a fraction. reduced_numerator and reduced_denominator 
are pointers to variables in which the function will store the numerator and denominator of the fraction once it has been reduced to lowest terms.
*/






#include <stdio.h>
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void)
{
    int numerator, denominator;
    printf("Enter a fraction: ");
    scanf("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &numerator, &denominator);

    
    printf("In lowest terms: %d/%d\n", numerator, denominator);
}


void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator) {
    int temp;

    while (numerator != 0)
    {
        temp = numerator;
        numerator = denominator % numerator;
        denominator = temp;
    }

    *reduced_numerator = *reduced_numerator / temp;
    *reduced_denominator = *reduced_denominator / temp;

}

