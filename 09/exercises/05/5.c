/*
Write a function num digits (n) that returns the number of digits in n (a positive integer)
*/

#include <stdio.h>

int num_digits(int num);

int main(void) {
    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    printf("Number of digits: %d\n", num_digits(number));

}


int num_digits(int num) {
    int n_digits = 0;

    while (num != 0)
    {
        num /= 10;
        n_digits++;
    }
    return n_digits;
    
}