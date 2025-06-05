/*
The prototypical Internet newbie is a fellow named BIFF, who has a unique way of writing messages. Here's a typical BIFF communiqué:

    H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!

Write a "BIFF filter" that reads a message entered by the user and translates it into BIFF-speak:

    Enter message: Hey dude, C is rilly cool
    In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!

Your program should convert the message to upper-case letters, 
substitute digits for certain letters (A→4, B→8, E→3, I→1, O→0, S→5), 
and then append 10 or so exclamation marks. Hint: Store the original message in an array of characters, 
then go back through the array, translating and printing characters one by one.
*/


#include <stdio.h>
#include <ctype.h>

#define MAX_MESSAGE_SIZE 75

int main(void)
{
    printf("Enter a message: ");
    
    char letter, mod_letter;
    char message[MAX_MESSAGE_SIZE] = {};

    // Get message and modify
    for (int i = 0; i < MAX_MESSAGE_SIZE && (letter = toupper(getchar())) != '\n'; i++ )
    {  
        switch (letter)
        {
            case 'A': 
                mod_letter = '4'; break;
            case 'B': 
                mod_letter = '8'; break;
            case 'E': 
                mod_letter = '3'; break;
            case 'I': 
                mod_letter = '1'; break;
            case 'O': 
                mod_letter = '0'; break;
            case 'S': 
                mod_letter = '5'; break;
            default:
                mod_letter = letter; break;
        }
        message[i] = mod_letter;
    }

    // Print New message
    for (int i = 0; i < MAX_MESSAGE_SIZE; i++ )
    {  
        printf("%c", message[i]);
        if (message[i] == '\n')
        {
            break;
        }
    }


    
}