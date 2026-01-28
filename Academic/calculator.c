/*
 * Write a C program that:
 * - asks the user to write two int numbers
 * - asks for the operation
 * - print out the resut
 *
 * REQUIREMENTS:
 * - The user may press any button (I can choose which one) to exit the program.
 * - The functions signature has to be as implemented below.
*/

#include <stdio.h>
#include <ctype.h>

int sum(int a, int b);
int sub(int a, int b);
long product(int a, int b);
float division(int a, int b);
int mod(int a, int b);

void message();
void ynLogic(char yn, int *exitValue);
float operation(int op, int a, int b);

int main(void)
{
    int exit = 0; //1 = exit, 0 = stay
    int a, b, op;
    char yn;

    do
    {
        printf("\nWrite two integer numbers: ");
        if (scanf("%d%d", &a, &b) != 2)
        {
            printf("\nError: invalid numbers. Leaving the program.");
            return 1;
        }
        else
        {
            message();
            printf("\nChoose the operation: ");
            if (scanf("%d", &op) != 1)
            {
                while (getchar() != '\n');
                printf("\nError: invalid operation.");
            }
            else
            {
                printf("\nThe result is %.2f", operation(op, a, b));
                while (getchar() != '\n');

                printf("\nDo you want to continue (y/n)? ");
                yn = getchar();
                ynLogic(yn, &exit);
            }
        }
    }
    while (exit == 0);

    return 0;
}

int sum(int a, int b)
{
    return (a + b);
}

int sub(int a, int b)
{
    return (a - b);
}

long product(int a, int b)
{
    return ((long)a * b); //casting to long to avoid overflow
}

float division(int a, int b)
{
    if (b == 0)
    {
        printf("\nError: division by zero.");
        return 0.0;
    }
    else
    {
        //Casting 'a' allows you to return the float value (as 'b' will be automatically casted to float), otherwise we would return int value
        return ((float)a / b);
    }
}

int mod(int a, int b)
{
    return (a % b);
}

void message()
{
    printf("\nUse 0 to sum the values");
    printf("\nUse 1 to sub the values");
    printf("\nUse 2 to do the product of the values");
    printf("\nUse 3 to do the division between the values");
    printf("\nUse 4 to do the mod of the values\n");
}

void ynLogic(char yn, int *exitValue)
{
    yn = tolower(yn);

    if (yn == 'n')
    {
        printf("\nAs you wish, leaving the program.");
        *exitValue = 1;
    }
    else
    {
        *exitValue = 0;
        if (yn != 'y')
        {
            printf("\nWrong choice. Continuing by default");
        }
    }
}

float operation(int op, int a, int b)
{
    switch (op)
    {
    case 0: return sum(a, b);
    case 1: return sub(a, b);
    case 2: return product(a, b);
    case 3: return division(a, b);
    case 4: return mod(a, b);
    default:
        printf("\nWrong operation. Returning zero");
        return 0.0;
    }
}
