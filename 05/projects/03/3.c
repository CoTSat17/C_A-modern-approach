/*
Modify the broker.c program of Section 5.2 by making both of the following changes:
    (a) Ask the user to enter the number of shares and the price per share, instead of the value
    of the trade.
    (b) Add statements that compute the commission charged by a rival broker 
    ($33 plus 3¢ pershare for fewer than 2000 shares; $33 plus 2¢ per share for 2000 shares or more). 
    Display the rival's commission as well as the commission charged by the original broker.

*/

#include <stdio.h>

int main(void)
{
    // Get the trade information
    printf("Get number of shares: ");
    int n_shares;
    scanf("%d", &n_shares);

    printf("Get price per share:" );
    float price_per_share;
    scanf("%f", &price_per_share);

    float transaction_size = n_shares * price_per_share;

    // Calculate traders commision
    float commission;
    if (transaction_size < 2500)
    {
        commission = 30 + transaction_size * (1.7 / 100);
    }
    else if (transaction_size < 6250)
    {
        commission = 56 + transaction_size * (0.66 / 100);
    }
    else if (transaction_size < 20000)
    {
        commission = 76 + transaction_size * (0.34 / 100);
    }
    else if (transaction_size < 50000)
    {
        commission = 100 + transaction_size * (0.22 / 100);
    }
    else if (transaction_size < 500000)
    {
        commission = 155 + transaction_size * (0.11 / 100);
    }
    else{
        commission = 255 + transaction_size * (0.09 / 100);
    }

    printf("Commission: $%.2f\n", commission);


    // Rival broker 
    float rival_commission;
    if (n_shares < 2000)
    {
        rival_commission = 33 + 0.03 * n_shares;
    }
    else
    {
        rival_commission = 33 + 0.02*n_shares;
    }

    printf("Rival Commission: $%.2f\n", rival_commission);
}