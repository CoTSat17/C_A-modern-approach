/*
Write the following function:

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

a points to an array of length n. The function searches the array for its largest and second-largest elements, 
storing them in the variables pointed to by largest and second_largest, respectively. 
Use pointer arithmetic -- not subscripting -- to visit array elements.
*/

#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void) {
    int a[4] = {1, 2, -40, 305};
    int largest_value = 0;
    int second_largest_value = 0;

    find_two_largest(a, 4, &largest_value, &second_largest_value);

    printf("The largest is: %d The second is: %d\n", largest_value, second_largest_value);

}



void find_two_largest(const int *a, int n, int *largest, int *second_largest) {



    for (const int* p=a; p < a+n; p++) {
        if (*p > *largest) {
            if (*largest > *second_largest) {
                *second_largest = *largest;
            }
            *largest = *p;
        }

        else if (*p > *second_largest) {
            *second_largest = *p;
        }

    }
}