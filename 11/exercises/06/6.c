/*
Write the following function:

void find_two_largest(int a[], int n, int *largest, int *second_largest);
When passed an array a of length n, the function will search a for its largest and second-largest elements, 
storing them in the variables pointed to by largest and second-largest respectively.
*/



#include <stdio.h>

#define ARRAY_LENGHT 4

void find_two_largest(int a[], int n, int *largest, int *second_largest);


int main(void) {
    int array[ARRAY_LENGHT] = {1, 2, 20, 0};
    int largest = 0, second_largest = 0;

    find_two_largest(array, ARRAY_LENGHT, &largest, &second_largest);
    printf("The largets is %d, the second is %d\n", largest, second_largest);


}

void find_two_largest(int a[], int n, int *largest, int *second_largest) {

    for (int i=0; i < n; i++) {
        if (a[i] > *largest) {
            if (*largest > *second_largest) {
                *second_largest = *largest;
            }
            *largest = a[i];
            
        }
        else if (a[i] > *second_largest) {
            *second_largest = a[i];
        }
    }
}