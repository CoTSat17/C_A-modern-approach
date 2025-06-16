/*
Rewrite the following function to use pointer arithmetic instead of array subscripting. 
(In other words, eliminate the variables i and j and all uses of the [] operator.) 
Use a single loop instead of nested loops.

int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int i, j, sum = 0;

    for (i = 0; i < n; i++)
        for (j = 0; j < LEN; j++)
            sum += a[i][j];
    return sum;
}
*/

#include <stdio.h>

#define LEN 4

int sum_two_dimensional_array(int a[][LEN], int n);


int main(void) {
    int array[2][4] =  {{1,2,3,4}, {1,2,3,4}};

    printf("The sum is: %d\n", sum_two_dimensional_array(array, 2));
}



int sum_two_dimensional_array(int a[][LEN], int n)
{
    int sum = 0;
    int *p = a[0];
    while (p < a[n])
    {
        sum += *p++;
    }
    return sum;
}