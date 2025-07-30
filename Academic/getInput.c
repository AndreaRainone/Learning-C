/*Write a program that takes an integer number in input from keyboard
Note: Initially we will not include any input verification*/
#include <stdio.h>

int main(){

    int number = 0; //signed integer

    printf("Write a number: ");
    scanf("%d",&number);
    printf("\nThe number you've chosen is: %d", number);

    return 0;
}