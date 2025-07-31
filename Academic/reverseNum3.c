/*Same as "reverseNum2.c" but better management...at least I'll try it*/

#include <stdio.h>

int main(){

    int num = 0;
    int digit = 0;
    int temp = 0;

    do{
        printf("Insert a number at least two digits long: ");
        if(scanf("%d", &num) != 1){ //we should improve our input validation. But this is not the case.
            printf("\nError: invalid input");
            printf("\nLeaving the program...");
            return 1;
        }
    }while(num > -10 && num < 10);//stay in the loop till the input is valid.

    int sign = (num<0) ? -1 : 1; //I store -1 for neg. numbers

    while(num != 0){
        digit = num % 10;
        num /= 10;
        temp = (temp*10) + digit;
    }
    if (sign == -1){
        temp *= sign;
        printf("\nThe reversed number is: -%d\n", temp);
    }else{
        printf("\nThe reversed number is: %d\n", temp);
    }

    return 0;
}