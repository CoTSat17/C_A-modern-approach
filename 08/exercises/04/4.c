/*
Write a declaration of an array named weekend containing seven bool values. Include an
initializer that makes the first and last values true; all other values should be false.
*/

#include <stdio.h>

int main(void)
{
    int weekend[] = {[0] = 1, [6] = 1};

    int array_size = sizeof(weekend)/sizeof(weekend[0]);
    for (int i=0; i<7; i++)
        printf("%d", weekend[i]);
}