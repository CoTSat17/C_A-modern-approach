/*
Write a program that tests whether two words are anagrams (permutations of the same letters):

    Enter first word: smartest
    Enter second word: mattress
    The words are anagrams.

    Enter first word: dumbest
    Enter second word: stumble
    The words are not anagrams.

Write a loop that reads the first word, character by character, using an array of 26 integers to
keep track of how many times each letter has been seen. (For example, after the word smartest has been read, the array should contain the values 1 00010000000100001220
00000, reflecting the fact that smartest contains one a, one e, one m, one r, two s's and
two t's.) Use another loop to read the second word, except this time decrementing the corresponding array element as each letter is read. Both loops should ignore any characters that
aren't letters, and both should treat upper-case letters in the same way as lower-case letters.
After the second word has been read, use a third loop to check whether all the elements in
the array are zero. If so, the words are anagrams. Hint: You may wish to use functions from
<ctype.h>, such as isalpha and tolower.
*/

#include <stdio.h>

int main(void) {

    int letter_counter[26] = {0};
    char letter;
    
    // 1_ Get first word
    printf("Enter first word: ");
    while ((letter = getchar()) != '\n')
    {
        // 1.2_ Count the nº of each letter in an array
        letter_counter[letter - 'a']++;
    }
    

    // 2_ Get second word
    printf("Enter second word: ");
    while ((letter = getchar()) != '\n')
    {
        // 2.1_ Subtract the nº of each letter in the array
        letter_counter[letter - 'a']--;
    }


    // 5_ Check if the array is all 0
    int is_anagram = 1;
    for (int i=0; i<26; i++) {
        if (letter_counter[i] != 0) {
            printf("The words not are anagrams.");
            is_anagram = 0;
            break;
        }
    } 
    if (is_anagram) {
        printf("The words are anagrams.");
    }

}