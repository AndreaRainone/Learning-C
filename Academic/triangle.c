/*Write a program where, once given three values
print which type of triangle it is (equilateral / isosceles / scalene)
Requirement: use pairs comparison*/

#include <stdio.h>

int main(){

    float side1 = 0.0;
    float side2 = 0.0;
    float side3 = 0.0;

    printf("Insert the triangle sides (consecutives): ");
    if(scanf("%f %f %f", &side1, &side2, &side3) != 3){ // != 3 because we have 3 inputs
        printf("\nERROR: invalid input...");
        printf("\nExiting program...\n");
        return 1;

    }else if(side1 <= 0 || side2 <= 0 || side3 <= 0){
        printf("\nERROR: sides must be positive\n");
        return 1;
    }else if(side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1){ //triangle inequality
        printf("\nERROR: this is not a triangle");
        printf("\nExiting program...\n");
        return 1;
    }else{

        if (side1 == side2){
            if(side1 == side3){
                printf("\nIt is an equilateral triangle");
            }else{
                printf("\nIt is an isosceles triangle");
            }
        }else{
            if(side2 == side3){
                printf("\nIt is an isosceles triangle");
            }else{
                printf("\nIt is a scalene triangle");
            }
        }
   }

    return 0;
}
