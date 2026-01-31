/*
 *  Write a C program in which:
 *  - Write a function " long fatt (int n) " that return the factor of the number.
 *
 *  Hint:
 *  n * (n-1)!          0! = 1
 */

#include <stdio.h>

long fatt(int n)
{
    long result = 1;
    if (n == 0)
    {
        return 1;
    }
    while (n > 0)
    {
        result *= n;
        n--;
    }
    return result;
}

int main(void)
{
    int num = 0;

    printf("Write an integer number: ");
    if (scanf("%d", &num) != 1)
    {
        printf("\nError: invalid input. Exiting the program...");
        return 1;
    }

    printf("\nThe factorial of %d is %ld", num, fatt(num));


    return 0;
}
