/*
The following (rather confusing) function finds the median of three numbers. Rewrite the function so that it has just one return statement.

int median(int x, int y, int z)
{
    if (x <= y)
        if (y <= z) return y;
        else if (x <= z return z;
        else return x;
    if (z <= y) return y;
    if (x <= z) return x;
    return z;
}
*/

#include <stdio.h>
int median(int x, int y, int z);


int main(void) {
    int a,b,c;
    printf("Introduce values: ");
    scanf("%d,%d,%d", &a, &b, &c);

    printf("The median value is: %d", median(a, b, c));

}


int median(int x, int y, int z)
{
    int median;

    if ( (x <= y && y<=z) || (x >= y && y>=z )) {
        median = y;
    }
    else if ( (y <= x && x<=z) || (y >= x && x>=z ) ) {
        median = x;
    }
    else {
        median = z;
    }

    return median;

}
