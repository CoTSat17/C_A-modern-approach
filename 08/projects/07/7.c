/*
Write a program that reads a 5 x 5 array of integers and then prints the row sums and the column sums:

    Enter row 1: 8 3 9 0 10
    Enter row 2: 3 5 17 1 1
    Enter row 3: 2 8 6 23 1
    Enter row 4: 15 7 3 2 9
    Enter row 5: 6 14 2 6 0

    Row totals: 30 27 40 36 28
    Column totals: 34 37 37 32 21
*/

#include <stdio.h>

#define MATRIX_SIZE 5

int main(void)
{
    // Define the matrix

    int matrix[MATRIX_SIZE][MATRIX_SIZE];
    int row_sum[MATRIX_SIZE] = {0};
    int col_sum[MATRIX_SIZE] = {0};

    for (int i=0; i<MATRIX_SIZE; i++)
    {
        printf("Enter row %d:", i + 1);
        for (int j=0; j<MATRIX_SIZE; j++)
        {
            scanf("%d", &matrix[i][j]);
            row_sum[i] += matrix[i][j];
            col_sum[j] += matrix[i][j];
        }
    }

    printf("Row totals: ");
    for (int i=0; i<MATRIX_SIZE; i++)
    {
        printf(" %d", row_sum[i]);
    }
    printf("\n");

    printf("Column totals: ");
    for (int i=0; i<MATRIX_SIZE; i++)
    {
        printf(" %d", col_sum[i]);
    }
    printf("\n");

}