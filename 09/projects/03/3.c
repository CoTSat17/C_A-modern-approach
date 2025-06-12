/*
Modify Programming Project 9 from Chapter 8 so that it includes the following functions:

    void generate random walk (char walk [10] [10]);
    void print_array (char walk [10] [10]);

main first calls generate random walk, which initializes the array to contain.
characters and then replaces some of these characters by the letters A through Z, as
described in the original project. main then calls print_array to display the array on
the screen.
*/



#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define matrix_size 10

void generate_random_walk (char [][matrix_size]);
void print_array(char [][matrix_size]);


int main(void)
{
    srand(time(NULL));

    char matrix[matrix_size][matrix_size];
    generate_random_walk(matrix);

    print_array(matrix);
}


void print_array(char matrix[][matrix_size]) {
    for (int i=0; i<matrix_size; i++) {
        for (int j=0; j<matrix_size; j++) {
            printf(" %c", matrix[i][j]);
        }
        printf("\n");
    }
}



void generate_random_walk (char matrix[][matrix_size]) {

    // 1_ Generate the matrix


    // initalize with all '.'
    for (int i=0; i<10; i++) {
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

}