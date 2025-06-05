/*
Write a program that generates a "random walk" across a 10 x 10 array. 
The array will contain characters (all '.' initially). 
The program must randomly "walk" from element to element, always going up, down, left or right by one element. 
The elements visited by the program will be labeled with the letters A through Z, in the order visited. 
Here's an example of the desired output:

    A . . . . . . . . .
    B C D . . . . . . .
    . F E . . . . . . .
    H G . . . . . . . .
    I . . . . . . . . .
    J . . . . . . . Z .
    K . . R S T U V Y .
    L M P Q . . . W X .
    . N O . . . . . . .
    . . . . . . . . . .

Hint Use the srand and rand functions (see deal.c) to generate random numbers. 
After generating a number, look at its remainder when divided by 4. 
There are four possible values for the remainder -- 0, 1, 2 and 3 -- indiciating the direction of the next move. 
Before performing a move, check that (a) it won't go outside the array, and (b) it doesn't take us to an 
element that already has a letter assigned. If either condition is violated, try moving in another direction. 
If all four directions are blocked, thr program must terminate. Here's an example of premature termination:

    A B G H I . . . . .
    . C F . J K . . . .
    . D E . M L . . . .
    . . . . N O . . . .
    . . W X Y P Q . . .
    . . V U T S R . . .
    . . . . . . . . . .
    . . . . . . . . . .
    . . . . . . . . . .
    . . . . . . . . . .

Y is blocked on all four sides, so there's no place to put Z.
*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define matrix_size 10

int main(void)
{
    srand(time(NULL));


    // 1_ Generate the matrix

    char matrix[matrix_size][matrix_size];

    // initalize with all '.'
    for (int i=0; i<matrix_size; i++) {
        for (int j=0; j<matrix_size; j++){
            matrix[i][j] = '.';
        }
    }

    // 2_ Place the letters
        // 2.1_ Start on 0,0
        char letter = 'A';
        int i = 0, j = 0;
        int new_i = 0, new_j = 0; // Used to check if the new direction is valid
        int direction;
        int end_loop;
        
        int used_directions[4] = {0}; // for the four possible directions, if 1 is that that direction is not possible

        // 2.2_ Loop selecting a random direction, ends when all directions invalid or finishes the letters
        while (letter<= 'Z') {
            matrix[i][j] = letter;

            // 2.2.1_ Get new direction, 0 up, 1 right, 2 down, 3 left.
            direction = rand() % 4;
            switch (direction) {
                case 0:
                    new_i--; break;
                case 1:
                    new_j++; break;
                case 2:
                    new_i++; break;
                case 3:
                    new_j--; break;
            }            

            // 2.2.2_ Check if the direction is invalid
            if (new_i < 0 || new_i > matrix_size-1 || new_j < 0 || new_j > matrix_size-1 || matrix[new_i][new_j] != '.') {
                // 2.2.2.1_ If direction invalid try another direction
                used_directions[direction] = 1;

                // 2.2.2.2_ See if all directions are invalid
                // Check all 4 directions to see if they are all used (1), if one or more are not used dont break the loop
                end_loop = 1;
                for (int dir=0; dir<4; dir++) {
                    if (used_directions[dir] == 0){
                        end_loop =0;
                        break;
                    }
                }

                // 2.2.2.3_ End the loop if all directions are invalid per 2.2.2.2
                if (end_loop == 1){
                    break;
                }

                // 2.2.2.4_ Return to the previous values of next_i, next_j
                new_i = i;
                new_j = j;

            }

            // 2.2.3_ If the direction is valid save the new matrix position and go to next letter, reset the rest of variables
            else {
                i = new_i;
                j = new_j;
                letter++;
                used_directions[0] = 0;
                used_directions[1] = 0;
                used_directions[2] = 0;
                used_directions[3] = 0;
                end_loop = 0;
            }

        }

    // 3_ Print the array

    for (int i=0; i<matrix_size; i++) {
        for (int j=0; j<matrix_size; j++) {
            printf(" %c", matrix[i][j]);
        }
        printf("\n");
    }
}