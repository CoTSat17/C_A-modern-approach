/* 
Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then
displays the numbers in a 4 by 4 arrangement, followed by the sums of the rows, columns,
and diagonals:

    Enter the numbers from 1 to 16 in any order:
    16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

    16  3  2 13
     5 10 11  8
     9  6  7 12
     4 15 14  1
    Row sums: 34 34 34 34
    Column sums: 34 34 34 34
    Diagonal sums: 34 34

If the row, column, and diagonal sums are all the same (as they are in this example), the
numbers are said to form amagic square. The magic square shown here appears in a 1514
engraving by artist and mathematician Albrecht Dürer. (Note that the middle numbers in the
last row give the date of the engraving.)
*/

#include <stdio.h>

#define n_numbers 16
#define n_col 4
#define n_row n_numbers / n_col


int main(void)
{
    // Get the numbers
    printf("Enter the numbers from 1 to 16 in any order:\n");
    int numbers[n_row][n_col];

    for (int i = 0; i <n_numbers; i++)
    {
        scanf("%d", &numbers[i/n_col][i % n_col]);
    }

    
    // Print matrix & Get Sums
    int sum_row[n_row] = {0};
    int sum_col[n_col] = {0};
    int sum_diagonal[2] = {0};


    for (int i=0; i < n_row; i++)
    {
        for (int j=0; j < n_col; j++)
        {
            printf("%2d\t",numbers[i][j]);

            sum_row[i] += numbers[i][j];
            sum_col[j] += numbers[i][j];
            
            if (i == j) // Check first diagonal
            {
                sum_diagonal[0] += numbers[i][j];
            }
            
            if (i == (n_col - (j+1))) // Check second diagonal
            {
                sum_diagonal[1] += numbers[i][j];
            }
        }
        printf("\n");
    }

    // Print Sum
    // Row sums: 34 34 34 34
    // Column sums: 34 34 34 34
    // Diagonal sums: 34 34

    printf("Row sums: ");
    for (int i=0; i <n_row; i++)
    {
        printf("%d ",sum_row[i]);
    }
    printf("\n");

    printf("column sums: ");
    for (int i=0; i <n_col; i++)
    {
        printf("%d ",sum_col[i]);
    }
    printf("\n");

    printf("Diagonal sums: ");
    for (int i=0; i <2; i++)
    {
        printf("%d ",sum_diagonal[i]);
    }
    printf("\n");
    
}