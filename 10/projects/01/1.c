/*
Modify the stack example of Section 10.2 so that it stores characters instead of integers. 
Next, add a main function that asks the user to enter a series of parentheses and/or braces, 
then indicates whether or not they're properly nested:

    Enter parentheses and/or braces: ((){}{()})
    Parentheses/braces are nested properly

Hint: As the program reads characters, have it push each left parenthesis or left brace. 
When it reads a right parenthesis or brace, have it pop the stack and check that the item popped is a matching parenthesis or brace. 
(If not, the parentheses/braces aren't nested properly.) When the program reads the new-line character, 
have it check whether the stack is empty; if so, the parentheses/braces are matched. If the stack isn't empty 
(or if stack_underflow is ever called), the parentheses/braces aren't matched. 
If stack_overflow is called, have the program print the message Stack overflow and terminate immediately.
*/

#include <stdbool.h>
#include <stdio.h>

#define STACK_SIZE 100

/* external variables */
char contents [STACK_SIZE];
int top = 0;
int correct = 0; // 0 if correct 1 if incorrect nesting


void make_empty (void);
bool is_empty(void);
bool is_full(void);
void push (char i);
char pop (void);
void stack_overflow(void);
void stack_underflow (void);


int main(void) {

    printf("Enter parentheses and/or braces: ");
    char letter;

    while ((letter = getchar()) != '\n' && correct == 0) {
        switch (letter) {
            case '{': case '(':
                push(letter);
                break;
            case '}':
                if (pop() != '{') {
                    correct = 1;
                }
                break;
            case ')':
                if (pop() != '(') {
                    correct = 1;
                }
                break;
        }
    }
    
    if (correct == 1) {
        printf("Parentheses/braces are not nested properly\n");
    }
    else {
        printf("Parentheses/braces are nested properly\n");
    }

}














void make_empty (void) {
    top = 0;
}

bool is_empty(void) {
    return top == 0;
}

bool is_full(void) {
    return top == STACK_SIZE;
}

void push (char i) {
    if (is_full()) {
        stack_overflow();
    }
    else {
        contents [top++] = i;
    }
}

char pop (void) {
    if (is_empty()) {
        stack_underflow();
        return ' ';
    }
    else {
        return contents[--top];
    }
}


void stack_overflow () {
    printf("Stack Overflow\n");
}

void stack_underflow () {
    printf("Stack Underflow\n");
}