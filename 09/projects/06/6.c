/*
Write a function that computes the value of the following polynomial:

3x5 + 2x4 - 5x3 - x² + 7x - 6.

Write a program that asks the user to enter a value for x, calls the function to compute the value of the polynomial,
and then displays the value returned by the function.

*/

#include <stdio.h>

float calc_polynomial(int);
float pow_calc(int, int);

int main(void) {
    //1_ Get x value
    float x_value;
    printf("X = ");
    scanf("%f", &x_value);

    //2_ Compute polynomial
    float result;
    result = calc_polynomial(x_value);

    //3_ Print result
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %.2f", result);

}


float calc_polynomial(int x) {
    // 3x5 + 2x4 - 5x3 - x² + 7x - 6.
    float result =  3*pow_calc(x,5) + 2*pow_calc(x,4) - 5*pow_calc(x,3) - pow_calc(x,2) + 7*x - 6;
    return result;
}

float pow_calc(int x_value, int power) {
    float result = x_value;

    for (int i=0; i< (power-1); i++) {
        result *= x_value;
    }

    return result;
}

