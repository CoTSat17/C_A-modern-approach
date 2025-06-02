/*
Write a program that finds the largest and smallest of four integers entered by the user:
    Enter four integers: 21 43 10 35
    Largest: 43
    Smallest: 10
Use as few i f statements as possible. Hint: Four if statements are sufficient.
*/

#include <stdio.h>

int main(void)
{
    printf("Enter four integers: ");
    int n_1, n_2, n_3, n_4;
    scanf("%d %d %d %d", &n_1, &n_2, &n_3, &n_4);

    int max_1, min_1, max_2, min_2;

    if (n_1 >= n_2)
    {
        max_1 = n_1;
        min_1 = n_2;
    }
    else
    {
        max_1 = n_2;
        min_1 = n_1;
    }

    if (n_3 >= n_4)
    {
        max_2 = n_3;
        min_2 = n_4;
    }
    else
    {
        max_2 = n_4;
        min_2 = n_3;
    }

    if (max_1 >= max_2)
    {
        printf("Largest: %d\n", max_1);
    }
    else
    {
        printf("Largest: %d\n", max_2);
    }

    if (min_1 <= min_2)
    {
        printf("Smallest: %d\n", min_1);
    }
    else
    {
        printf("Smallest: %d\n", min_2);
    }
}