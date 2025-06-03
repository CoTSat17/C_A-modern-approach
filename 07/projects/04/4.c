/*
Write a program that translates an alphabetic phone number into numeric form:

    Enter phone number: CALLATT
    2255288

(In case you don't have a telephone nearby, here are the letters on the keys: 2=ABC, 3=DEF,
4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY.) If the original phone number contains
nonalphabetic characters (digits or punctuation, for example), leave them unchanged:

    Enter phone number: 1-800-COL-LECT
    1-800-265-5328

You may assume that any letters entered by the user are upper case.
*/

#include <stdio.h>

int main(void)
{
    printf("Enter phone number: ");
    int x;
    int corresponding_number;

    while ( (x = getchar()) != '\n')
    {
        // Handle letters
        if (x>=65 && x<= 90) // check if x is a letter; checking that x has the ascii values between A and Z;
        {
            corresponding_number = 2 + (x - 'A') / 3;
            printf("%d", corresponding_number);
        }
        else
        {
            printf("%c", x);
        }
        
    }
    

}