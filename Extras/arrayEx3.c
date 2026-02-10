/*
 * Write a C program that split an array in two:
 * - One with even numbers
 * - One with odd numbers
 */

#include <stdio.h>
#define LENGTH 100

void insert(int a[], int dim)
{
    for (int i = 0; i < dim; i++){
        if (scanf("%d", &a[i]) != 1)
        {
            printf("\nError: invalid number. Exiting the program...");
            break;
        }
    }

    printf("DEBUG: Array -> ");
    for (int i = 0; i < dim; i++)
    {
        printf("%d ", a[i]);
    }
}

int split(int a[], int b[], int dim_a, int dim_b)
{
    int j = 0;
    int k = 0;

    for (int i = 0; i < dim_a; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[j] = a[i];
            j++;
        }else
        {
            a[k] = a[i];
            k++;
        }
    }
    return j;
}

void print(int a[], int b[], int dim_a, int dim_b)
{
    printf("\nArray with odd numbers: ");
    for (int i = 0; i < dim_a - dim_b; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nArray with even numbers: ");
    for (int i = 0; i < dim_b; i++)
    {
        printf("%d ", b[i]);
    }

}

int main(void)
{
    int a[LENGTH], dim_a;
    int b[LENGTH], dim_b = 0;

    printf("How many numbers do you want to add? ");
    if (scanf("%d", &dim_a) != 1 || dim_a < 0 || dim_a > LENGTH){
        printf("\nError: invalid input. Exiting the program...");
        return 1;
    }

    printf("\nInsert the numbers: ");
    insert(a, dim_a);
    dim_b = split(a, b, dim_a, dim_b);
    print(a, b, dim_a, dim_b);


    return 0;
}