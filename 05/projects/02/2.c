/*
Write a program that asks the user for a 24-hour time, then displays the time in 12-hour form:

    Enter a 24-hour time: 21:11
    Equivalent 12-hour time: 9:11 PM

Be careful not to display 12:00 as 0:00.
*/

#include <stdio.h>

int main(void)
{
    printf("Enter a 24-hour time: ");
    int hours, minutes;
    scanf("%d:%d", &hours, &minutes);

    if (hours > 12)
    {
        printf("Equivalent 12-hour time: %.2d:%.2d PM", hours - 12, minutes);
    }
    else
    {
        printf("Equivalent 12-hour time: %.2d:%.2d AM", hours, minutes);
    }
}