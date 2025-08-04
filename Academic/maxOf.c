/*Write a program that takes TWO integer numbers and then print the max between them
We'll just check for empty input
NOTE: In this part of the course we won't take care to manage overflows*/

#include <stdio.h>

int main(){

    int num1 = 0, num2 = 0;

    printf("Insert the first integer numbers: ");
    if (scanf("%d", &num1) != 0){

        printf("\nInsert the second integer number: ");

        if(scanf("%d", &num2) != 0){

            //EDIT FROM HERE
            if(num1 > num2){
                printf("\n%d is the highest between the chosen numbers.\n", num1);
            }else if(num1 == num2){
                printf("\nSame numbers, therefore not a higher one.");
            }
            else{
                printf("\n%d is the highest between the chosen numbers.\n", num2);
            }
            //TO HERE

        }else{
            printf("\nERROR: invalid integer input.");
            printf("\nExiting the program...\n");
            return 1;
        }

    }else{
        printf("\nERROR: invalid integer input.");
        printf("\nExiting the program...\n");
        return 1;
        }
        
    return 0;
}

/*Final notes. We can solve this excercise with switch statement too. You just have to edit the signed part.
This program works in the same way using this code:


switch (num1 > num2) {
    case 1:
        printf("\n%d is the highest between the chosen numbers.\n", num1);
        break;
    case 0:
        switch (num1 == num2) {
            case 1:
                printf("\nSame numbers, therefore not a higher one.");
                break;
            case 0:
                printf("\n%d is the highest between the chosen numbers.\n", num2);
                break;
        }
    break;
}

*/