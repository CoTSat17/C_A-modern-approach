/*
Write the following function:

bool search(const int a[], int n, int key);
a is an array to be searched, n is the number of elements in the array, and key is the search key. 
search should return true if key matches some element of a, and false if it doesn't. 
Use pointer arithmetic -- not subscripting -- to visit array elements.
*/


#include <stdio.h>
#include <stdbool.h>

#define N 4

bool search(int a[], int n, int key);

int main(void) {
    int array[N] = {1, 2, 3, 4};
    int key = 2;

    printf("Is %d in the array? %s\n", key, search(array, N, key) ? "True" : "False"  );
}


bool search(int a[], int n, int key) {

    for (int* p=a; p < &a[n]; p++) {
        if (*p == key) {
            return true;
        }
    }

    return false;
}