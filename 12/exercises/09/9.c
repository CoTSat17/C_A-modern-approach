/*
Write the following function:

double inner_product(const double *a, const double *b, int n);

a and b both point to arrays of length n. 
The function should return a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1]. 
Use pointer arithmetic -- not subscripting -- to visit array elements.

*/

#include <stdio.h>

double inner_product(const double *a, const double *b, int n);


int main(void) {
    double a[3] = {1.5, 2.0, 1.5};
    double b[3] = {2, 1, 2};

    printf("%.3lf\n", inner_product(a, b, 3));

}


double inner_product(const double *a, const double *b, int n) {
    double res = 0;

    int i=0;
    while (i < n)
    {
        res += *a++ * *b++;
        i++;
    }
    return res;
}
