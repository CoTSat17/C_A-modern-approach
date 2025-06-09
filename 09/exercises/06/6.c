/*
 Write a function digit (n, k) that returns the kh digit (from the right) in n (a positive integer). 
 For example, digit (829, 1) returns 9, digit (829, 2) returns 2. and digit (829, 3) returns 8. 
 If k is greater than the number of digits in n, have the func- tion return 0.
*/


#include <stdio.h>

int get_n_digit(int, int);

int main(void) {
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    int digit = 2;
    printf("Enter digit: ");
    scanf("%d", &digit);
    
    printf("The %d digit is: %d", digit, get_n_digit(number, digit) );

}


int get_n_digit(int num, int digit) {
    for (int i=0; i<digit-1; i++) {
        num = num / 10;
    }

    num = num % 10;


    return num;


}