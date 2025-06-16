/*
Exercise 12.14
Assume that the following array contains a week's worth of hourly temperature readings, with each row containing the readings for one day:

    int temperatures[7][24];    

Write a statement that uses the search function (see Exercise 7) to search the entire temperatures array for the value 32.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int search(int a[], int n, int key);
void fill_temperatures(int [], int n);

int main(void) {
    srand(time(NULL));

    int temperatures[7][24];
    int key = 20;

    fill_temperatures(temperatures[0], 7*24);

    printf("There is %svalue of %d in the temperatures\n", search(temperatures[0], 7*24, key) ? "":"no ", key);


}

void fill_temperatures(int a[], int n) {
    /*
    Fill the array with random temperatures from 0 to 35
    */

    for (int *p=a; p < a+n; p++) {
        *p = rand() % (35 + 1);
    }
}





int search(int a[], int n, int key) {

    for (int* p=a; p < &a[n]; p++) {
        if (*p == key) {
            return 1;
        }
    }

    return 0;
}