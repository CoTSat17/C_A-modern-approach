/*
Write a program that calculates the average word length for a sentence:

    Enter a sentence: It was deja vu all over again.
    Average word length: 3.4

For simplicity, your program should consider a punctuation mark to be part of the word to
which it is attached. Display the average word length to one decimal placе.
*/

#include <stdio.h>

int main(void)
{
    char letter;
    int n_letters = 0; 
    int n_spaces = 0; 

    printf("Enter a sentence: ");
    while ((letter = getchar()) != '\n')
    {
    
    if (letter == ' ')
    {
        n_spaces++;
    }
    else
    {
        n_letters++;
    }
    
    
    }

    printf("Average word length: %.1f\n", (float) n_letters / n_spaces);
    

}