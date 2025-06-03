/*
Write a program that evaluates an expression:
    Enter an expression: 1+2.5*3
    Value of expression: 10.5

The operands in the expression are floating-point numbers; the operators are +, -, *, and /.
The expression is evaluated from left to right (no operator takes precedence over any other
operator).
*/

#include <stdio.h>

void read_number(int *number, char character);
void make_operation(int* left_number, int right_number, char operator);

int main(void)
{
    printf("Enter an expression: ");
    char character, operator = ' ';
    int left_number = 0, right_number = 0;

    // Read the first number 
    while ((character = getchar()) >= '0' && character <= '9')
    {
        read_number(&left_number, character);
    }
    
    operator = character;


    // Read the rest of the equation
    while ((character = getchar()) != '\n')
    {
        // Read numbers
        if (character >= '0' && character <= '9')
        {
            read_number(&right_number, character);
            continue;
        }

        // Make operation;      if it's the first operator (operator = ' ') no equation must be done.
        make_operation(&left_number, right_number, operator);
        right_number = 0;
        

        // Read operators
        operator = character;

    }
    
    make_operation(&left_number, right_number, operator);
    printf("The result is: %d", left_number);

}


void make_operation(int* left_number, int right_number, char operator)
// Makes the operation; if it's the first operator (operator = ' ') no equation must be done.
{
    switch (operator)
    {
        case '+':
            *left_number += right_number; break; 
        case '-':
            *left_number -= right_number; break;
        case '*':
            *left_number *= right_number; break;
        case '/':
            *left_number /= right_number; break;
        default:
            break;
    }
}

void read_number(int *number, char character)
{
    // Transform the character into a number
    int new_number = character - 48;


    // If its the first digit
    if (*number == 0)
    {
        *number = new_number;
        return;
    }
     
    // If it's not the first digti
    *number = *number * 10 + new_number;
    return;

}