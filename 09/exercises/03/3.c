/*
Write a function ged (m, n) that calculates the greatest common divisor of the integers m
and n. (Programming Project 2 in Chapter 6 describes Euclid's algorithm for computing the GCD.)

*/


#include <stdio.h>

int gcd(int m, int n);

int main(void)
{
    printf("%d\n", gcd(8,2));
    
}


int gcd(int m, int n) {
    int temp;

    while (m != 0)
    {
        temp = m;
        m = n % m;
        n = temp;
    }

    return temp;
}