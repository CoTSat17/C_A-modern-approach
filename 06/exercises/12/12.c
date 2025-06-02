


#include <stdio.h>

int main(void)
{
    for(int d=2, n=15; d * d < n; d++)
    {
        if (n % d == 0)
        {
            printf("A\n");
            break;
        }
    }
}