/*
 * Modify the previous version and print each number occurrence
 * EXAMPLE:
 *      Number: 123126
 *      Each digit: 0 1 2 3 4 5 6 7 8 9
 *      #Occur.: 0 2 2 1 0 0 1 0 0 0
 */

#include <stdio.h>

int main(void)
{
    int digit_count[10] = {0};
    long n;
    int digit;

    printf("Write a number: ");
    scanf("%ld", &n);

    while (n > 0)
    {
        digit = n % 10;
        digit_count[digit]++;
        n /= 10;
    }

    printf("Digits:      0 1 2 3 4 5 6 7 8 9\n");
    printf("Occurrences: ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", digit_count[i]);
    }
    return 0;
}
