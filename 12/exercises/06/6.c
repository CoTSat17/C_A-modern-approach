/*
Rewrite the following function to use pointer arithmetic instead of array subscripting. 
(In other words, elimate the variable i and all uses of the [] operator.) Make as few changes as possible.

int sum_array(const int a[], int n)
{
    int i, sum;

    sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i];
    return sum;
}
*/


#include <stdio.h>
#define N 10


int sum_array( int a[], int n);

int main(void) {
    int array[N] = {2,2,2,2,2,2,2,2,2,2};

    printf("The sum is: %d\n", sum_array(array, N));

}


int sum_array( int a[], int n)
{
    int  sum;

    sum = 0;
    for (int *p = &a[0]; p < &a[n]; p++ )
        sum += *p;
    return sum;
}