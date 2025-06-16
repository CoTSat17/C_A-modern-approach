/*
Suppose that high, low and middle are all pointer variables of the same type, 
and that low and high point to elements of an array. What is the following statement illegal, and how could it be fixed?

middle = (low + high) / 2;
*/


#include <stdio.h>

int main(void) {
    int a[] = {0, 1, 2, 3, 4};
    int *low = &a[0], *high = &a[4];

    int *mid= low + (high - low) / 2;

    printf("Low: %d High: %d\n", *low, *high);
    printf("Mid: %d", *mid);

}