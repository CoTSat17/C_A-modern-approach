/*
The following function is supposed to return true if any element of the array a has the
value 0 and false if all elements are nonzero. Sadly, it contains an error. Find the error and
show how to fix it:

bool has_zero(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        if (a[i] == 0)
            return true;
        else
            return false;
}
*/

#include <stdio.h>
#include <stdbool.h>

#define LENGHT 5 

void fill_array(int array[], int );
bool has_zero(int [], int);

int main(void) {
    int array[LENGHT];
    fill_array(array, LENGHT);

    printf("The result is %d\n", has_zero(array, LENGHT));
}




bool has_zero(int a[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        if (a[i] == 0)
            return true;
            
    return false;
}


void fill_array(int array[], int n) {
    printf("INTRODUCE ARRAY VALUES: \n");
    for (int i=0; i<n; i++) {
        printf("Value %d: ", i+1);
        scanf("%d", &array[i]);
    }
}