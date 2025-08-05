/*Write a program that:
1. takes a real number as input
2. print which type of liquor it is.*/

#include <stdio.h>

int main(){

    float alcoholContent = 0.0;

    printf("Insert the liquor alcohol content: ");
    if (scanf("%f", &alcoholContent) != 1){
        printf("\nERROR: invalid input.");
        printf("\nExiting the program...");

    }else{

        if (alcoholContent < 0){
            printf("\nERROR: alcohol content cannot be negative.\n");
        }else{

            if (alcoholContent <= 10.5) {
                printf("\nIt's a light wine\n");
            } else if (alcoholContent <= 12) {
                printf("\nIt's a normal wine\n");
            } else if (alcoholContent <= 15) {
                printf("\nIt's a strong wine\n");
            } else if (alcoholContent <= 20) {
                printf("\nIt's a fortified wine\n");
            } else if (alcoholContent <= 40) {
                printf("\nIt's a distilled beverage\n");
            } else {
                printf("\nIt's a hard liquor\n");
            }
        }
    }
    return 0;
}