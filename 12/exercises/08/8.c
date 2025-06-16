/*
Rewrite the following function to use pointer arithmetic instead of array subscripting. 
(In other words, eliminate the variable i and all uses of the [] operator.) Make as few changes as possible.

void store_zeros(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        a[i] = 0;
}
*/

#include <stdio.h>

#define N 4

void store_zeros(int a[], int n);

int main(void) {
    int array[N] = {1, 2, 1, 2};

    store_zeros(array, N);

    for (int* p=array; p<&array[N]; p++) {
        printf("%d, ", *p);
    }

}


void store_zeros(int a[], int n)
{

    for (int *p = a; p < &a[n]; p++)
        *p = 0;
}