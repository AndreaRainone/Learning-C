/*Given an integer input, determine whether it is even or odd.*/

#include <stdio.h>

int main(){

    int num = 0;
    printf("Insert an integer number: ");
    scanf("%d", &num);

    if((num % 2) == 0){
        printf("\nThis is an even number!\n");
    }else{
        printf("\nThis is an odd number!\n");
    }

    return 0;
}