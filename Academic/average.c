/*Write a program that calculates the average between n numbers.
REQUIREMENTS: when 0 (zero) is inserted, no more numbers are taken.*/

#include <stdio.h>

int main(){

    double total = 0.0;
    double temp = 0.0;
    int num = 0;
    double average = 0.0;

    while(1){

        printf("Insert a number (0 to stop): ");
        if(scanf("%lf", &temp) != 1){
            printf("\nERROR: invalid input.");
            printf("\nExiting the program...\n");
            return 1;
        }else{
            //check for 0 value.
            if(temp == 0){

                if(num == 0){
                    printf("\nERROR: cannot divide by zero");
                    printf("\nExiting the program...");
                    return 1;
                }else{
                    printf("\nYou've chosen to stop to calculate.");
                    break;
                }
            
            }else{
                num++;
                total += temp;
            }

        }

    }
    average = total / num;
    printf("\nThe average between the numbers is: %.2lf\n", average);

    return 0;
}