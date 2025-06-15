/*
Write the following function:

void swap(int *p, int *q);
When passed the addresses of two variables, swap should exchange the values of the variables:

swap(&i, &j);    

*/

#include <stdio.h>

void swap(int *p, int *q);



int main(void) {
    int p = 10, q = 20;
    swap(&p, &q);
    printf("P is now %d\nQ is now %d", p, q);
}

void swap(int *p, int *q) {
    int temp = *p;

    *p = *q;
    *q = temp;

}
