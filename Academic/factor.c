/*Write a program that asks for an integer number, then calculate its factors.*/

#include <stdio.h>

int main(){

    int num = 0;

    printf("Insert a number: ");
    if (scanf("%d", &num) != 1){
        printf("\nERROR: invalid input");
        printf("\nExiting the program...\n");
    }else{

        int i = 1;

        if(num <= 0){
            printf("\nERROR: invalid value.");
            printf("\nExiting the program...\n");
            return 1;
        }else{

            printf("\nThe factors of %d are: ", num);
            while(i <= num){
            
            if (num % i == 0){
                
                printf("%d", i);
                if(i != num){
                    printf(",");
                }
            }

                i++;
            }
        }
        
    }

    return 0;
}