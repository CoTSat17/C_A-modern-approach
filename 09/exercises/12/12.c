/*
Write the following function:
    double inner product (double a[], double b[], int n);
The function should return a [0] *b[0] +a[1] * b[1] +... + a [n-1] * b[n-1].
*/

#include <stdio.h>

void fill_array(int n, double array[n]);
double inner_product (int n, double a[n], double b[n]);

int main(void) {
    // 1_ Get array length
    printf("Array lenght: ");
    int n;
    scanf("%d", &n);

    // 2_ Get the values of the array
    double a[n];
    double b[n];
    fill_array(n, a);
    fill_array(n, b);

    // 3_ Calculate and print product
    printf("The inner product is %2lf\n", inner_product(n, a, b));

}

void fill_array(int n, double array[n]) {
    printf("INTRODUCE ARRAY VALUES: \n");
    for (int i=0; i<n; i++) {
        printf("Value %d: ", i+1);
        scanf("%lf", &array[i]);
    }
}



double inner_product (int n, double a[n], double b[n]) {
    double result = 0;
    for (int i=0; i<n; i++) {
        result += a[i] * b[i];
    }
    return result;
}
