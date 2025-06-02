#include <stdio.h>

int main(void)
{
    int m = 4, n;
    for (n = 0; m > 0; m /= 2, n++)
        ;
        

    printf("%d // %d\n", n, m);
}