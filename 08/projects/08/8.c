/*
Modify Programming Project 7 so that it prompts for five quiz grades for each of five students, 
then computes the total score and average score for each student, and the average score, high score, and low score for each quiz
*/

#include <stdio.h>

#define MATRIX_SIZE 5

int main(void)
{

    // Define the matrix


    int matrix[MATRIX_SIZE][MATRIX_SIZE];
    int student_sum[MATRIX_SIZE] = {0};
    int quiz_sum[MATRIX_SIZE] = {0};


    for (int i=0; i<MATRIX_SIZE; i++)
    {
        printf("Student %d:\n", i + 1);
        for (int j=0; j<MATRIX_SIZE; j++)
        {
            printf("\t Quiz %d: ", j + 1);
            scanf("%d", &matrix[i][j]);
            student_sum[i] += matrix[i][j];
            quiz_sum[j] += matrix[i][j];
        }
    }



    printf("\nStudent Averages: \n");
    for (int i=0; i<MATRIX_SIZE; i++)
    {
        printf("\tStudent %d %.2f", i + 1, (float) student_sum[i]/ MATRIX_SIZE);
    }
    printf("\n");



    printf("\nQuiz Averages: \n");
    for (int i=0; i<MATRIX_SIZE; i++)
    {
        printf("\tQuiz %d %2f", i + 1, (float) quiz_sum[i]/ MATRIX_SIZE);
    }
    printf("\n");

}