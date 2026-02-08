/*
 * Write a C program that:
 * - Asks the user to insert multiple integer numbers till
 *      - The sum is >= 1000
 * - Print each inserted number from the last to the first
 * - Print their product
 *
 * MINIMUM FUNCTION:
 * int main(void)
 * void writeTill(int [])
 * print(int[])
 */

int dim_a;

#include <stdio.h>
#define ARRAY_MAXLENGTH 5000

void writeTill(int a[]) {
    int sum = 0;
    dim_a = 0;
    printf("\nThe program will run till the sum is >= 1000.");
    while (dim_a < ARRAY_MAXLENGTH && sum < 1000) {
        printf("\nInsert the integer number: ");
        scanf("%d", &a[dim_a]);
        sum += a[dim_a];
        dim_a++;
    }
}

void print(int a[]) {
    if (dim_a == 0) {
        printf("\nNothing to print");
    }
    long long product = 1;

    printf("\nArray BEFORE: ");
    for (int i = 0; i < dim_a; i++) {
        printf("%d ", a[i]);
    }

    printf("\nArray LATER: ");
    for (int i = dim_a - 1; i >= 0 ; i--) {
        printf("%d ", a[i]);
    }

    for (int i = 0; i < dim_a; i++) {
        product *= a[i];
    }
    printf("\nThe product is: %lld", product);
}


int main(void) {

    int a[ARRAY_MAXLENGTH];

    writeTill(a);
    print(a);

    return 0;
}
