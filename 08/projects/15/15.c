/*
One of the oldest known encrpytion techniques in the Caesar cipher, attributed to Julius Caesar. 
It involves replacing each letter in a message with another letter that is a fixed number of positions later in the alphabet. 
(If the replacement would go past the letter Z, the cipher "wraps around" to the beginning of the alphabet. 
For example, if each letter is replaced by the letter two positions after it, the Y would be replaced by A, and Z would be replaced by B.) 
Write a program that encrypts a message using a Caesar cipher. 
The user will enter the message to be encrypted and the shift amount (the number of positions by which letters should be shifted):

    Enter message to be encrypted: Go ahead, make my day.
    Enter shift amount (1-25): 3
    Encrypted message: Jr dkhdg, pdnh pb gdb.

Notice that the program can decrypt a message if the user enters 26 minus the original key:

    Enter message to be encrypted: Jr dkhdg, pdnh pb gdb.
    Enter shift amount (1-25): 23
    Encrypted message: Go ahead, make my day.

You may assume that the message does not exceed 80 characters. 
Characters other than letters should be left unchanged. Lower-case letters remain lower-case when encrypted, 
and upper-case letters remain upper-case. Hint: To handle the wrap-around problem, use the expression 
((ch - 'A') + n % 26 + 'A' to calculate the encrypted version of an upper-case letter, 
where ch stores the letter and n stores the shift amount. (You'll need a similar expression for lower-case letters.)
*/

#include <stdio.h>
#include <ctype.h>
#define MAX_LENGHT 80

int main(void) {
    // 1_ Get the message
    printf("Enter message to be encrypted: ");
    char letter;
    char message[MAX_LENGHT];
    
    // 1.2_ Save the message in the array
    int i = 0;
    while ((letter = getchar()) != '\n')
    {
        message[i] = letter;
        i++;
    }
    message[i++] = '\n';


    // 2_ Get shift ammount
    printf("Enter shift amount (1-25): ");
    int shift_ammout;
    scanf("%d", &shift_ammout);

    // 3_ Print the messagge by iterating in the array
    for (int i=0; (letter = tolower(message[i])) != '\n'; i++)
        // 4_ For each letter sight by the determined ammount.
        if (letter >= 'a' && letter <= 'z') {
            printf("%c", (letter - 'a' + shift_ammout) % 26 + 'a');
        }
        else {
            printf("%c", letter);
        }
}