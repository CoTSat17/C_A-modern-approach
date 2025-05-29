/*
Write a program that accepts a date from the user in the form mm/dd/yyyy and then displays it in the form yyyymmdd:
Enter a date (mm/dd/yyyy): 2/17/2011
You entered the date 20110217
*/

#include <stdio.h>

int main(void)
{
    // Get date
    printf("Enter a date (mm/dd/yyyy): ");
    int day, month, year;
    scanf("%d/%d/%d", &day, &month, &year);

    // Print date
    printf("You entered the date %d%2.2d%2.2d", year, month,day);

}