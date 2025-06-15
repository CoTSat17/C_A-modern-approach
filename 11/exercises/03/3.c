/*

The following function supposedly computes the sum and average of the numbers in the array a, 
which has length n. avg and sum point to variables that the function should modify. 
Unfortunately, the function contains several errors; find and correct them.

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;

    sum = 0.0;
    for (i = 0; i < n; i++)
        sum += a[i];
    avg = sum / n;
}

*/

#include <stdio.h>

#define ARRAY_LENGHT 5

void avg_sum(double a[], int n, double *avg, double *sum);

int main(void) {
    double avg = 0, sum = 0;
    double a[ARRAY_LENGHT] = {1, 9, 5, 2, 8};

    avg_sum(a, ARRAY_LENGHT, &avg, &sum);

    printf("The sum is %.2lf; th average is %.2lf\n", sum, avg);
}




void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;

    *sum = 0.0;
    for (i = 0; i < n; i++)
        *sum += a[i];
    *avg = *sum / n;
}