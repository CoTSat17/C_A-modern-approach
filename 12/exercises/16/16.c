/*
Write a loop that prints the highest temperature in the temperatures array (see Exercise 14) for each day of the week. 
The loop body should call the find_largest function, passing it one row of the array at a time.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int search(int a[], int n, int key);
void fill_temperatures(int [], int );
int find_highest_temp(int [], int);


int main(void) {
    srand(time(NULL));

    int temperatures[7][24];
    int key = 20;

    fill_temperatures(temperatures[0], 7*24);

    printf("There is %svalue of %d in the temperatures\n", search(temperatures[0], 7*24, key) ? "":"no ", key);


    //Print the indicated day of the week
    printf("Select day of the week to print(0-6): ");
    int day_to_print;
    scanf("%d", &day_to_print);

    printf("\t");
    int *p = temperatures[day_to_print];
    while (p < temperatures[day_to_print + 1])
    {
        printf("%d  ", *p++);
    }
    
    // Print the hightest temp
    printf("\n\n");
    printf("The highest temp is: %d\n", find_highest_temp(temperatures[0], 7));
}

int find_highest_temp(int a[], int n) {

    int *highest = a;
    for (int* p= a+1; p < a+n; p++) {
        if (*p > *highest) {
            highest = p;
        }
    }

    return *highest;

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

