/*
Write the following function:

int *find_largest(int a[], int n);
When passed an array a of length n, the function will return a pointer to the array's largest element.

*/


#include <stdio.h>

#define ARRAY_SIZE 10

int *find_largest(int a[], int n);



int main(void) {

    int array[ARRAY_SIZE] = {10, 15, 4, 12, 100, 20, 65, 89, 99, -225};

    int* largest_value = find_largest(array, ARRAY_SIZE);

    printf("The largest is %d\n", *largest_value);

}

int *find_largest(int a[], int n) {
    int* largest = &a[0];

    for (int i=1; i<n; i++) {
        if (a[i] > *largest) {
            largest = &a[i];
        }
    }

    return largest;
}