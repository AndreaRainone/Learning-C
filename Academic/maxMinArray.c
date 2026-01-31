/*
 *Write a C program in which
 * - insert 'n' integer numbers in the array
 * - return the max and the minimum number in the array
 *
 * REQUIREMENT:
 * - Write two different functions
 */

#include <stdio.h>
#define MAX_LENGTH 100

int max(int a[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        max = (max > a[i]) ? max : a[i];
    }
    return max;
}

int min(int a[], int n)
{
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        min = (min < a[i]) ? min : a[i];
    }
    return min;
}

void out(int a[], int n)
{
    printf("\nOriginal array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nThe max value is: %d", max(a, n));
    printf("\nThe min value is: %d", min(a, n));
}

void insert(int a[], int n)
{
    printf("Insert the numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

int main(void)
{

    int a[MAX_LENGTH];
    int arrayDim;

    printf("How many numbers you want to insert? ");
    if (scanf("%d", &arrayDim) != 1 || arrayDim > MAX_LENGTH || arrayDim <= 0)
    {
        printf("\nError: invalid input or array dimension > of the max value");
        printf("\nExiting the program...");
        return 1;
    }

    insert(a, arrayDim);
    out(a, arrayDim);

    return 0;
}