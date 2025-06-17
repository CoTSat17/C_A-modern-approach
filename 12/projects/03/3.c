/*
(a)
Write a program that reads a message, then prints the reversal of the message:

    Enter a message: Don't get mad, get even.
    Reversal is: .neve teg ,dam teg t'noD

Hint: Read the message one character at a time (using getchar) and store the characters in an array. 
Stop reading when the array is full or the character read is '\n'.

(b)
Revise the program to use a pointer instead of an integer to keep track of the current position in the array.
*/

#include <stdio.h>

#define MAX_LENGTH 50

int main(void) {

    /* VERSION A

    // Save the message to an array
    printf("Enter a message: ");
    char message_array[MAX_LENGTH] = {' '};
    int i = 0;
    char letter;
    while ((letter = getchar()) != '\n' || i == MAX_LENGTH)
    {
        message_array[i++] = letter;
    }

    // Read the message in reverse 
    
    printf("Reversal is: ");
    while (i >= 0)
    {
        printf("%c", message_array[i--]);
    }
    
    */
    

    // VERSION B)

    // Save the message to an array
    printf("Enter a message: ");
    char message_array[MAX_LENGTH] = {' '};
    char *p = message_array;
    char letter;
    while ((letter = getchar()) != '\n' || p == message_array + MAX_LENGTH)
    {
        *p++ = letter;
    }

    // Read the message in reverse 
    printf("Reversal is: ");
    while (p >= message_array)
    {
        printf("%c", *p--);
    }
    


}