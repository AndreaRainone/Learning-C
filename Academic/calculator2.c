/*
 * Calculator v2:
 * The given numbers may be more than two.
 *
 * REQUIREMENTS:
 * - use the arrays
 * - single operation ( + )
 */

#include <stdio.h>
#include <ctype.h>

int somma(int a[], int n)
{
    int somma = 0;
    for (int i = 0; i < n; i++)
    {
        somma += a[i];
    }
    return somma;
}

void ynLogic(char yn, int *exitCode)
{
    yn = tolower(yn);
    if (yn == 'n')
    {
        printf("\nAs you wish...Exiting the program");
        *exitCode = 1;
    }
    else
    {
        *exitCode = 0;
        if (yn != 'y')
        {
            printf("\nInvalid choice... continuing by default");
        }
    }
}

int main()
{
    int exit = 0;
    int length;
    char yn;

    do
    {
        printf("\nHow many numbers do you want to write?");
        if (scanf("%d", &length) != 1 || length <= 0)
        {
            printf("\nError: invalid input. Exiting the program..");
            return 1;
        }
        int a[length];
        printf("\nWrite the numbers: ");
        for (int j = 0; j < length; j++)
        {
            scanf("%d", &a[j]);
        }
        printf("\nThe result is: %d", somma(a, length));
        while (getchar() != '\n');

        printf("\nDo you want to continue (y/n)? ");
        yn = getchar();
        ynLogic(yn, &exit);
    }
    while (exit == 0);

    return 0;
}
