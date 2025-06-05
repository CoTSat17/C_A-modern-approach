/*
Modify Programming Project 4 from Chapter 7 so that the program labels its output:
    Enter phone number: 1-800-COL-LECТ
    In numeric form: 1-800-265-5328
The program will need to store the phone number (either in its original form or in its
numeric form) in an array of characters until it can be printed. You may assume that the
phone number is no more than 15 characters long.
*/


#include <stdio.h>

#define max_lenght 15

int main(void)
{
    printf("Enter phone number: ");
    int x;
    char corresponding_number;

    char numeric_number[max_lenght] = {' '};

    int i = 0;

    while ( (x = getchar()) != '\n')
    {
        // Handle letters
        if (x>=65 && x<= 90) // check if x is a letter; checking that x has the ascii values between A and Z;
        {
            corresponding_number = (2 + (x - 'A') / 3) + '0';
            numeric_number[i] = corresponding_number;
        }
        else
        {
            numeric_number[i] = x;
        }
        
        i++;
    }
    
    

}