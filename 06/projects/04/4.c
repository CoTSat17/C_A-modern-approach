/*
Add a loop to the broker.c program of Section 5.2 so that the user can enter more than
one trade and the program will calculate the commission on each. The program should terminate when the user enters 0 as the trade value:

    Enter value of trade: 30000
    Commission: $166.00

    Enter value of trade: 20000
    Commission: $144.00

    Enter value of trade: 0

*/

#include <stdio.h>

float calculate_commision(int trade_value);

int main(void)
{
    int trade_value = 1;
    while (1)
    {
    printf("Enter value of trade:");
    scanf("%d", &trade_value);
    if (trade_value == 0)
    {
        break;
    }

    printf("Commision: %.2f\n", calculate_commision(trade_value));
    }

}



float calculate_commision(int trade_value)
{

 // Calculate traders commision
    float commission;
    if (trade_value < 2500)
    {
        commission = 30 + trade_value * (1.7 / 100);
    }
    else if (trade_value < 6250)
    {
        commission = 56 + trade_value * (0.66 / 100);
    }
    else if (trade_value < 20000)
    {
        commission = 76 + trade_value * (0.34 / 100);
    }
    else if (trade_value < 50000)
    {
        commission = 100 + trade_value * (0.22 / 100);
    }
    else if (trade_value < 500000)
    {
        commission = 155 + trade_value * (0.11 / 100);
    }
    else{
        commission = 255 + trade_value * (0.09 / 100);
    }

    return commission;
}