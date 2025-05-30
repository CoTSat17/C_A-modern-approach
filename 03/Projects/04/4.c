/*
Write a program that prompts the user to enter a telephone number in the form (xxx) xxxxxxx and then displays the number in the form xxx.xxx.xXx:

Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
You entered 404.817.6900
*/

#include <stdio.h>

int main(void)
{
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    int p1, p2, p3;
    scanf("(%d) %d-%d", &p1, &p2, &p3);

    printf("You entered %d.%d.%d",p1, p2, p3);
    
}