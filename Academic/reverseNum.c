/*Write a program which asks to the user a two digit integer number, then print it reversed
NOTE: there are many other ways to solve it in this way (allow me to say: shit).*/

#include <stdio.h>

int main(){

    int num = 0;
    printf("Insert a two digit number: ");
    scanf("%d",&num);

    // check for a two digit number
    if((num >= 10 && num <= 99) || (num <= -10 && num >= -99)) {

        int lastDigit = num % 10;
        int firstDigit = num / 10;

        //one more check for negative numbers (it could be solved using math.h library, without this check)
        if (num < -9){
            printf("\nThe given number, reversed is: -%d%d", -lastDigit, -firstDigit);
        }else { 
            printf("\nThe given number, reversed, is: %d%d", lastDigit,firstDigit);
        }

    }else{
        printf("\nERROR: two digit integer number required");
        printf("\nLeaving the program...\n");
        return 1;
    }

    return 0;
}