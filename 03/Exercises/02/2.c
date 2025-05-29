/* 
Write calls of print f that display a float variable x in the following formats.
    (a) Exponential notation; left-justified in a field of size 8; one digit after the decimal point.
    (b) Exponential notation; right-justified in a field of size 10; six digits after the decimal
    point.
    (c) Fixed decimal notation; left-justified in a field of size 8; three digits after the decimal
    point.
    (d) Fixed decimal notation; right-justified in a field of size 6; no digits after the decimal
    point.
*/

#include <stdio.h>

int main(void)
{
    float value_1 = 2.454;

    // A)
    printf("%8.1e\n", value_1);

    // B)
    printf("%-10.6e\n", value_1);

    // C) 
    printf("%8.3f\n", value_1);

    // D)
    printf("%-6.0f\n", value_1);

}