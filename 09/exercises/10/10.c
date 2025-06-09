/*
Write functions that return the following values. (Assume that a and n are parameters,
where a is an array of int values and n is the length of the array.)
(a) The largest element in a.
(b) The average of all elements in a.
(c) The number of positive elements in a.
*/

#include <stdio.h>

int largest_element(int n, int [n]);
float average(int n, int [n]);
int n_positives(int n, int [n]);

int main(void) {

    // Get how many parameters
    int n_parameters;
    printf("Number of parameters: ");
    scanf("%d", &n_parameters);

    // Create the array and fill it
    int number_array[n_parameters];
    int value;
    for (int i=0; i<n_parameters; i++) {
        // Get value
        printf("Insert value %d: ",i);
        scanf("%d", &value);
        // Save value
        number_array[i] = value;
    }

    // print the largest element in the array
    printf("The largest element in the array is: %d\n", largest_element(n_parameters, number_array));

    // Print the average value of the array
    printf("The average value of the array is: %.2f\n", average(n_parameters, number_array));

    // Print the n of positive values
    printf("The number of poisitive values is: %d\n", n_positives(n_parameters, number_array));
}


int largest_element(int n, int a[n]) {
    int largest = 0;
    for (int i=0; i<n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    return largest;
}


float average(int n, int a[n]) {
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum += a[i];
    }

    return (float) sum / n;
}


int n_positives(int n, int a[n]) {
    int n_positives = 0;
    for (int i=0; i<n; i++) {
        if (a[i] >= 0) {
            n_positives++;
        }
    }

    return n_positives;
}