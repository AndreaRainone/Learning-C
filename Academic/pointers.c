/*
 *  Write a C program which:
 *  - Takes an integer array (10 values long)
 *
 *  REQUIREMENTS:
 *  - Each int value has to be positive (>0)
 *  - Write a function that returns:
 *      - sum of each value
 *      - the product of the elements in even positions
 *      - the division of the elements in odd positions
 *      - Prototype: " void doit(int a[], int n, int *sum, long *product, double *division) "
 *
 */

#include <stdio.h>

void doit(int a[], int n, int *sum, long *product, double *division) {

    *sum = 0;
    *product = 1;
    *division = 1.0;

    for (int i = 0; i < n; i++) {
        *sum += a[i];
        if (i % 2 == 0) {
            *product *= a[i];
        }else {
            *division /= (double)a[i];
        }
    }
}

int main(void) {
    int a[10], sum;
    long product;
    double division;
    const int n = 10;

    printf("Insert the integer values: ");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1 || a[i] <= 0) {
            printf("\nError: invalid value. Exiting the program...");
            return 1;
        }
    }

    doit(a, n, &sum, &product, &division);

    printf("\nThe sum is: %d", sum);
    printf("\nThe product is: %ld", product);
    printf("\nThe division is: %.6lf", division);

    return 0;
}
