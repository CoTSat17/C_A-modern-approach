/*
Using the switch statement, writeaprogram that converts a numerical grade into a letter grade:

Enter numerical grade: 84
Letter grade: B

Use the following grading scale: A = 90-100, B = 80-89, С = 70–79, D = 60-69, F=0-59.
Print an error message if the grade is larger than 100 or less than 0. Hint: Break the grade
into two digits, then use a switch statement to test the ten's digit.

*/

#include <stdio.h>

int main(void)
{
    printf("Enter numerical grade: ");
    int grade;
    scanf("%d", &grade); 
    grade = grade / 10; 

    switch (grade)
    {
    case 0: case 1: case 2: case 3: case 4: case 5:
        printf("Letter Grade: F\n");
        break;

    case 6:
        printf("Letter Grade: D\n");
        break;
    
    case 7:
        printf("Letter Grade: C\n");
        break;

    case 8:
        printf("Letter Grade: B\n");
        break;

    case 9: case 10:
        printf("Letter Grade: A\n");
        break;

    default:
        printf("ERROR\n");
    }
}