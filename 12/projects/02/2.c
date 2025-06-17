/*
Write a program that reads a message, then checks whether it's a palindrom (the letters in the message are the same from left to right as from right to left):

    Enter a message: He lived as a devil, eh?
    Palindrome

    Enter a message: Madam, I am Adam.
    Not a palindrome

Ignore all characters that aren't letters. Use integer variables to keep track of positions in the array.

(b)
Revise the program to use pointers instead of integers to keep trac of positions in the array.
*/

#include <stdio.h>
#include <ctype.h>

#define ARRAY_LEN 50

int main(void) {
    // 1_ Create array to save the message
    char array[ARRAY_LEN];
    char letter;
    char* p_array = array;

    // 2_ Save the message in the array
    printf("The message is: ");

    while ((letter = tolower(getchar())) != '\n') {
        // 2.1_ Save only the letters
        if (letter >= 'a' && letter <= 'z') {
            *p_array++ = letter; 
        }
    }
    p_array--;
    
    // 3_ Compare the characters, starting from the end and start, and moving both towards the center
    int palindrome = 1; // 1 if palindrome 0 if not
    char* p_array_2 = array;
    while (p_array > p_array_2) {
        //3.1_ Compare the characters
        if (*p_array != *p_array_2) {
            palindrome = 0;
            break;
        }
        //3.2_ Move the pointers towards the center
        p_array--;
        p_array_2++;
    }

    // 4_ Print result
    printf("%sPalindrome", palindrome ? "" : "Not A ");


}