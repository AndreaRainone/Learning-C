/*
 * Write a C program that:
 * - Asks the user to insert 10 integer numbers in an array
 * - Then calculate the sum and the average
 */

#include <stdio.h>

#define LENGTH 10

int inputValidation(int a[], int dim)
{
    int arraySize = 0;
    for (int i = 0; i < dim; i++)
    {
        if (scanf("%d", &a[i]) != 1)
        {
            printf("\nError: invalid input. Exiting the program...");
            return 1;
        }
        arraySize++;
    }
    return arraySize;
}

void operations(int a[], int dim)
{
    float aver;
    int sum = 0;

    for (int i = 0; i < dim; i++)
    {
        sum += a[i];
    }
    printf("\nDEBUG: the sum %d", sum);
    aver = (float) sum / dim;

    printf("\nThe sum of each values is: %d", sum);
    printf("\nThe average is %.3f", aver);
}

int main(void)
{
    int a[LENGTH];
    int dim_a;

    printf("\nInsert ten integer numbers: ");
    dim_a = inputValidation(a, 10);

    operations(a, dim_a);

    return 0;
}
