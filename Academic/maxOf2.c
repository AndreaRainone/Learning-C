/*Let's extend the previous program to "n" integer numbers
Note2: we will ignore higher int numbers, but I'll try to expand the range of valid inputs
(exceeding the max_int values)*/

#include <stdio.h>

int main(){

    long int range = 0;
    long int num = 0, max = 0;

    printf("Insert how many numbers you want to insert: ");
    if (scanf("%ld", &range) != 1){  
        printf("\nERROR: invalid input.");
        printf("\nExiting the program...\n");
        return 1;
    }else{
        for (int i = 1; i <= range; i++){
            printf("\nInsert the %d° number: ", i);

            if(scanf("%ld", &num) != 1){
                printf("\nERROR: invalid input.");
                printf("\nExiting the program...\n");
                return 1;
            }else{
                if (i==1){
                    max = num;
                }else {
                    max = (num > max) ? num : max;
                }
            }
        }
    }
    
    printf("\nThe max value is: %ld", max);

    return 0;
}