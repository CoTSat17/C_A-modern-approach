/*
The power function of Section 9.6 can be made faster by having it calculate x" in a different way. 
We first notice that if n is a power of 2, then x" can be computed by squaring. 
For example, x is the square of x², so x can be computed using only two multiplications instead of three. 
As it happens, this technique can be used even when n is not a power of 2. If n is
even, we use the formula x" = (x/2)2. If n is odd, then x" = x xx-1, Write a recursive function that computes x". 
(The recursion ends when n = 0, in which case the function returns 1.)
To test your function, write a program that asks the user to enter values for x and n, calls
power to compute x", and then displays the value returned by the function.
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
    int res;

    if (power == 0) {
        return 1;
    }

    if (power % 2 == 0) {
        res = pow_calc(x_value, power /2);
        return res * res;
    }

    else {
        return x_value * pow_calc(x_value, power - 1);
    }
}

