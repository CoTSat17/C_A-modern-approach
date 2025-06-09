/*
Write a function check (x, y, n) that returns 1 if both x and y fall between 0 and n -1,
inclusive. The function should return 0 otherwise. Assume that x, y, and n are all of typе int.
*/

#include <stdio.h>

int check(int, int, int);


int main(void) {
    printf("%d\n", check(1, 20, 2));
}



int check(int x, int y, int n) {
    if (x < 0 || x > n) {
        return 0;
    }
    
    if (y < 0 || y > n) {
        return 0;
    }

    return 1;
}