/*
 * Write a C program in which:
 * - Insert 15 random numbers in an array
 * - Asks the user for a number
 *
 * OUTPUT:
 * - That number is in the array
 * - Print the position (index) where it is.
 *
 * NOTE: Ignore any multiple value in the array
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LENGTH 15

void operation(int a[], int dim, int num)
{
    int found = 0, i = 0;
    while (found == 0 && i < dim)
    {
        if (a[i] == num)
        {
            found = 1;
        }
        i++;
    }

    if (found == 1)
    {
        printf("\nResult: FOUND");
        printf("\nThe given number matches the number in position %d", i - 1);
    }else
    {
        printf("\nResult: NOT FOUND");
    }

}

int main(void)
{
    srand(time(NULL));

    int a[LENGTH];
    int dim_a = 0;
    int num;

    for (int i = 0; i < 15; i++)
    {
        a[i] = rand() % 30 + 1;;
        dim_a++;
    }

    printf("\nInsert a number: ");
    if (scanf("%d", &num) != 1)
    {
        printf("\nError: invalid input. Exiting the program...");
        return 1;
    }

    operation(a, dim_a, num);
    return 0;
}