/*
Write a program that asks the user for a 12-hour time, then displays the time in 24-hour form:

    Enter a 12-hour time: 9:11 PM
    Equivalent 24-hour time: 21:11

See Programming Project 8 for a description of the input format.
*/

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    // Get time
    printf("Enter a 12-hour time: ");
    int hour, minutes;
    scanf("%d:%d", &hour, &minutes);

    // Get the AM/PM indicator
    char t;
    while ((t = getchar()) == ' ')
        ;
    t = toupper(t);

    // Change depending on AM or PM
    if (t == 'P')
    {
        hour +=12;
    }

    printf("Equivalent 24-hour time: %.2d:%.2d", hour, minutes);
}