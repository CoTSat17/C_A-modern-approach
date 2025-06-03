/*
Write a program that counts the number of vowels (a, e, i, o, and u) in a sentence:
    Enter a sentence: And that's the way it is.
    Your sentence contains 6 vowels.
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("Enter a sentence: ");
    int vowels = 0;
    char letter;
    while ((letter = tolower(getchar())) != '\n')
    {
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
        {
            vowels++;
        }
    }
    
    printf("Your sentence contains %d vowels.\n", vowels);
}
