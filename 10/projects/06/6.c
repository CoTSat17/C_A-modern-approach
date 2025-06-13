/*
Some calculators (notably those from Hewlett-Packard) use a system of writing mathematical expressions known as Reverse Polish Notation (RPN).
 In this notation, operators are placed after their operands instead of between their operands. 
 For example, 1 + 2 would be written 1 2 + in RPN, and 1 + 2 * 3 would be written 1 2 3 * +. 
 RPN expressions can easily be evaluated using a stack. The algorithm involves reading the operators and operands 
 in an expression from left to right, performing the following actions:

When an operand is encountered, push it onto the stack.
When an operator is encountered, pop its operands from the stack, perform the operation on those operands and then push the result onto the stack.
Write a program that evaluates RPN expressions. The operands will be single-digit integers, 
The operators are +, -, *, /, and =. The = operator causes the top stack item to be displayed; afterwards, 
the stack is cleared and the user is prompted to enter another expression. 
The process continues until the user enters a character that is not an operator or operand:

    Enter an RPN expression: 1 2 3 * + =
    Value of expression: 7
    Enter an RPN expression: 5 8 * 4 9 - / =
    Value of expression: -8
    Enter an RPN expression: q

If the stack overflows, the program will display the message Expression is too complex and terminate. 
If the stack underflows (because of an expression such as 1 2 + +), the program will display the message Not enough 
operands in expression and terminate. Hints: Incorporate the stack code from Section 10.2 into your program.
Use scanf(" %c", &ch) to read the operators and operands.
*/


#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 50





int operands [STACK_SIZE];
int stack_top = 0;



void stack_push(int);
int stack_pop(void);
void execute_operation(int operator);
void stack_overflow(void);
void stack_underflow(void);







int main(void) {
    char input_value;
    int run_programm = 1; 


    // 0_ Make loop
    while (run_programm)
    {
        // 1_ Get the expression
        printf("Enter an RPN expression: ");

        // 2_ Iterate through the expresion
        while ((input_value = getchar()) != '\n') {
            // 2.0_ If value is ' ', discard
            if (input_value == ' ') {
                continue;
            }

            // 2.1_ If a operand push to the stack
            if (input_value >= '0' && input_value <= '9') {
                stack_push(input_value - '0');
            }
            // 2.2_ If the operator is "=" print the last item on the stack
            else if (input_value == '=') {
                printf("Value of expression: %d\n", stack_pop());
                 
            }
            // 2.3_ If a operator execute calculation
            else if (input_value == '*' || input_value == '+' || input_value == '-' || input_value == '/') {
                execute_operation(input_value);
            }

            // 2.4_ If character is another thing, end programm
            else {
                run_programm = 0;
                break;
            }
            
        }

        // 3_ Prepare for next loop
        
    }
}



// Push the value to the stack
void stack_push(int value) {
    // 1_ Check if the stack is full
    if (stack_top >= STACK_SIZE) {
        stack_overflow();
    }

    // 2_ If not full add the item to the top
    operands[stack_top++] = value;
}

// Return the last value of the stack
int stack_pop() {
    // 1_ Check if the stack is empty
    if (stack_top <= 1) {
        stack_underflow();
    }

    // 2_ If not empty return last value and update "stack top"
    return operands[--stack_top];
}



// Executes the calculation with the last 2 values on the stack
// Saves the result as the last value on the stack
void execute_operation(int operator) {
    int operation_result = 0;
    // 1_ Pop last 2 operands from the stack
    int value_1 = stack_pop();
    int value_2 = stack_pop();

    // 2_ Get calculation result
    switch (operator) {
        case '+':
            operation_result = value_1 + value_2; break; 
        case '-':
            operation_result = value_1 - value_2; break; 
        case '*':
            operation_result = value_1 * value_2; break; 
        case '/':
            operation_result = value_1 / value_2; break; 
        default:
            printf("ERROR\n");
    }            
    // 3_ Push result to the stack
    stack_push(operation_result);
}



void stack_overflow () {
    printf("Stack Overflow\n");
    exit(EXIT_FAILURE);
}

void stack_underflow () {
    printf("Stack Underflow\n");
    exit(EXIT_FAILURE);

}