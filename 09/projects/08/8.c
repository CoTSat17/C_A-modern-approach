/*
Write a program that simulates the game of craps, which is played with two dice. 
On the first roll, the player winds if the sum of the dice is 7 or 11. 
The player loses if the sum is 2, 3 or 12. Any other roll is called the "point" and the game continues. 
On each subsequent roll, the player wins if he or she rolls the point again. The player loses by rolling 7. 
Any other roll is ignored and the game continues. At the end of each game, the program will ask the user whether or not to play again. 
When the user enters a response other than y or Y, the program will display the number of wins and losses then terminate.

    You rolled: 8
    Your point is 8
    You rolled: 3
    You rolled: 10
    You rolled: 8
    You win!

    Play again? y

    You rolled: 6
    Your point is 6
    You rolled: 5
    You rolled: 12
    You rolled: 3
    You rolled: 7
    You lose!

    Play again? y

    You rolled: 11
    You win!

    Play again? n

    Wins: 2  Losses: 1

Write your program as three functions: main, roll_dice and play_game. Here are the prototypes for the latter two functions:

    int roll_dice(void);
    bool play_game{void);

roll_dice should generate two random numbers, each between 1 and 6, and return their sum. 
play_game should play one craps game (calling roll_dice to determine the outcome of each dice roll); 
it will return true if the player wins and false if the player loses. 
play_game is also responsible for displaying messages showing the results of the player's dice rolls. 
main will call play_game repeatedly keeping track of the number of wins and losses and displaying the "you win" and "you lose" messages. 
Hint: Use the rand function to generate random numbers. See the deal.c program in Section 8.2 
for an example of how to call rand and the related srand function.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice();

int main(void) {
    // 0_ Initialize the variables
    char play = 'y';
    int roll_result;
    int win; // 0 if none; 1 if won; 2 if lost 
    int point;
    srand(time(NULL));

    // 1_ Create game loop
    while (play == 'y')
    {
        win = 0;   
        // 2_ Make first roll
        roll_result = roll_dice();
        printf("You rolled: %d\n", roll_result);
        // 2.1_ Check the roll resutls;  win if 7 or 11, lose if 2, 3 or 12; If neither, stablish "point"
        switch (roll_result)
        {
            case 7: case 11:
                win = 1; break;
            case 2: case 3: case 12:
                win = 2; break;
            default: 
                point = roll_result; break;
        }    

        // 3_ Loop new rolls, while the player hasnt lost or won (win == 0)
        while (win == 0)
        {
            // 3.1_ Roll dice
            roll_result = roll_dice();
            printf("You rolled: %d\n", roll_result);

            // 3.3_ Check roll resutls; win if == "point", lose if 7, continue if else.
            if (roll_result == point) {
                win = 1;
            }
            else if (roll_result == 7) {
                win = 2;
            }

        }
        
        // 4_ Print result
        if (win == 1) {
            printf("You win\n");
        }
        else {
            printf("You lose\n");
        }


        // 5_ Ask for a new game
        printf("New Game? y/n ");
        scanf("%c", &play);
        getchar();
    }
}




int roll_dice() {
    int dice_1 = rand() % (6 + 1 - 1) + 1;
    int dice_2 = rand() % (6 + 1 - 1) + 1;
    return dice_1 + dice_2;

}
