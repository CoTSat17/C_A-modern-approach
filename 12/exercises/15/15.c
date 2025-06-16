/*
Write a loop that prints all temperature readings stored in row i of the temperatures array (see Exercise 14). 
Use a pointer to visit each element of the row.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int search(int a[], int n, int key);
void fill_temperatures(int [], int );


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

