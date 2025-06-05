


#include <stdio.h>

#define MAX_LENGHT 20

int main(void)
{
    char last_name[MAX_LENGHT] = {' '};


    printf("Enter a first and last name: ");

    char letter, first_letter;

    // Get first letter 
    while ((letter = getchar()) == ' ')
        ;
    first_letter = letter;

    // Advance to the last name
    while ((letter = getchar()) != ' ')
        ;

    // Print the Last name
    int i = 0;
    while ((letter = getchar()) != '\n')
    {
        if (letter != ' ')
        {
            printf("%c", letter);
            last_name[i] = letter;
            i++;
        }
    }
    
    printf(", %c", first_letter);

    printf("\n");
    for (int i=0; i<MAX_LENGHT; i++) {
        printf("%c", last_name[i]);
    }
    
}