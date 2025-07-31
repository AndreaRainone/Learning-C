/*Take the previous version and extend it to two/three/four(etc) digits int number
Note: I'll not use any library except the standard I/O */

#include <stdio.h>

int main(){

    int num = 0;
    int temp = 0;

    printf("Insert an two or more digits integer number: ");
    
    //check if the user gives an input
    if ((scanf("%d", &num) == 1)){

        if (num >= 10){

            int digit = 0;
            while(num != 0){
                digit = num % 10;
                num /= 10;
                temp = (temp * 10) + digit;
            }
            printf("\nThe reversed given number is: %d\n", temp);

        }else if(num <= -10){

            num = -num;
            int digit = 0;
            while(num != 0){
                digit = num % 10;
                num /= 10;
                temp = (temp * 10) + digit;
            }
            printf("\nThe reversed given number is: -%d\n", temp);
        }else{
            printf("\nERROR: invalid input. The number has to be at least of two digits.");
            printf("Leaving the program...\n");
        }

    }else{
        printf("\nERROR: invalid input.");
        printf("\nLeaving the program...\n");
        return 1;
    }

    return 0;
}