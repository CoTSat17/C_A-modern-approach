/* 
Write a program that formats product information entered by the user. A session with the
program should look like this:

    Enter item number: 583
    Enter unit price: 13.5
    Enter purchase date (mm/dd/yyyy): 10/24/2010

    Item    Unit    Purchase
            Price   Date
    583     $ 13.50 10/24/2010

The item number and date should be left justified; the unit price should be right justified.
Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns.
*/

#include <stdio.h>

int main(void)
{
    // Get data
    printf("Enter item number: ");
    int item_num;
    scanf("%d", &item_num);
    
    printf("Enter unit price: ");
    float unit_price;
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    int month, day, year;
    scanf("%d/%d/%d", &month, &day, &year);

    // Print data
    printf(
        "Item\tUnit\tPurchase\n"
        "\tPrice\tDate\n"
        "%d\t$%6.2f\t%2.2d/%2.2d/%d", item_num, unit_price, day, month, year        );
}