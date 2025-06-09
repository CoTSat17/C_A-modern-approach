/*
Write the following function:
float compute GPA (char grades [], int n);
The grades array will contain letter grades (A, B, C, D, or F, either upper-case or lowercase); 
n is the length of the array. The function should return the average of the grades
(assume that A = 4, B = 3, C= 2, D = 1, and F = 0).
*/

#include <stdio.h>
#include <ctype.h>

float compute_gpa(int n, char [n]);

int main(void) {
    // 1_ Get number of grades
    printf("Number of grades: ");
    int n;
    scanf("%d", &n);


    // 1.1_ Create and VLA
    char grades[n];
    
    // 2_ Save the grades in an array; Loop and ask for each grade
    char letter;
    for (int i=0; i<n; i++) {
        //2.1_ Get letter
        printf("Grade %d: ", i+1);
        getchar();
        scanf("%c", &letter);

        //2.1_ Save letter, before change it into upper
        grades[i] = toupper(letter);

    }

    
    // 3_ Print GPA
    printf("The GPA is: %.2f\n", compute_gpa(n, grades));
}


float compute_gpa(int n, char grades[n]) {
    int total = 0;
    int grade;
    // 1_ Iterate through the array, calculate the average
    for (int i=0; i<n; i++) {
        // 1.1_ Get grade
        grade = grades[i];
        // 1.2_ Get value with "Swich" statement and add it to the total
        switch (grade)
        {
            case 'A':
                total += 4; break; 
            case 'B':
                total += 3; break; 
            case 'C':
                total += 2; break;
            case 'D':
                total += 1; break; 
            case 'F':
                total += 0; break;        

        }
    }
    
    return (float) total/n;
}
