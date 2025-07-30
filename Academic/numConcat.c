/*Write a program in which:
1. Ask for four numbers in sequence
2. Print two outputs in which:
The first int number is given by the sequence of the four numbers
The second number has to be a float where, the int part is given by the conc. of the last 
two numbers and the decimal part is given by the conc. of the first two numbers

Note: we can solve it in two ways: considering it as a string or through math manipulation
The second one is my choice, as for now I'm not able to manipulate strings
*/

#include <stdio.h>

int main(){

    int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
    int result1 = 0;
    float result2 = 0.0;

    printf("Insert four separate numbers [press enter for each one]: ");
    scanf("%d%d%d%d", &num1, &num2, &num3, &num4);

    result1 = (num1 * 1000) + (num2 * 100) + (num3 * 10) + num4;

    int intPart = (num4 * 10) + num3;
    float floatingPart = (num1 * 10 + num2) / 100.0;
    result2 = intPart + floatingPart;

    printf("The first result is: %d\n", result1);
    printf("The second result is: %.2f\n", result2);

    return 0;
}