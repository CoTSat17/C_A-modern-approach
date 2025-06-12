/*
Write a program that asks the user to enter a series of integers (which it stores in an array),
then sorts the integers by calling the function selection_sort. When given an array
with n elements, selection_sort must do the following:
1. Search the array to find the largest element, then move it to the last position in the array.
2. Call itself recursively to sort the first n - 1 elements of the array.
*/


#include <stdio.h>

void selection_sort(int n, int[n]);

int main(void) {
    // 1_ Get array lenght
    int n;
    printf("Array lenght: ");
    scanf("%d", &n);

    // 2_ Create and fill array
    int array[n];
    for (int i=0; i<n; i++) {
        printf("Insert value %d:", i+1);
        scanf("%d", &array[i]);
    }
    // 3_ Short array
    selection_sort(n, array);

    // 4_ Print shorted array
    printf("\nThe sorted array is: ");
    for (int i=0; i<n; i++) {
        printf("%d, ", array[i]);
    }
}


void selection_sort(int n, int array[n]) {
    // 1_ Find largest item in the array
    int max_position = 0;
    for (int i=0; i<n; i++) {
        if (array[i] > array[max_position]) {
            max_position = i;
        }
    }
    
    // 2_ Move to the end of the array
    int temp = array[n-1];
    array[n-1] = array[max_position];
    array[max_position] = temp;

    // 3_ Not at the end call itself, but to n-1
    if (n > 1) {
        selection_sort(n-1, array);
    }

    // 4_ End 
    return;
}