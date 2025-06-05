/*
Write a program that reverses the words in a sentence:

    Enter a sentence: you can cage a swallow can't you?
    Reversal of sentence: you can't swallow a cage can you?

Hint: Use a loop to read the characters one by one and store them in a one-dimensional
char array. Have the loop stop at a period, question mark, or exclamation point (the "terminating character"), which is saved in a separate char variable. Then use a second loop to
search backward through the array for the beginning of the last word. Print the last word,
then search backward for the next-to-last word. Repeat until the beginning of the array is
reached. Finally, print the terminating character.

*/

#include <stdio.h>
#define MAX_WORDS 10
#define MAX_LETTERS 15

int main(void) {

    char letter;
    char words[MAX_WORDS][MAX_LETTERS];
    int word_index = 0, letter_index = 0; 

    // 1_ Get the sentece 

    while ((letter = getchar()) != '\n' && letter != '?' && letter != '!' && letter != '.')
    {
        // 1.2_ Create a 2d array where each word is a in a array
        if (letter == ' ') {
            words[word_index][letter_index] = '\0'; // indicates the end of the word
            word_index++;
            letter_index = 0;
        }
        else {
            words[word_index][letter_index] = letter;
            letter_index++;

        }

    }
    words[word_index][letter_index] = '\0';
    char last_character = letter;

    // 2_ Loop in reverse the loop.
    for (; word_index >= 0; word_index--) {
        // 2.1_ Print each word
        for (int i=0; (letter = words[word_index][i]) != '\0'; i++) {
            printf("%c", letter);
        }
        printf(" ");
    }
    printf("%c", last_character);


}