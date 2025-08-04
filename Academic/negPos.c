/*Write a program in which, after taken a number:
1. If the number is negative, convert it to positive
2. Print if it's odd or even
NOTE: we can solve this in two ways for each task.
1. We can multiply by -1 or we can use the abs function from math.h library
---- int abs(int) ----- float fabs(float) ----
2. we can use % operand (output: 0 for even, 1 for odd) or we can divide 
by 2 again and again till it's not divisible

FIRST METHOD: we will use multiplication and the % operand*/

#include <stdio.h>

int main(){

    int num = 0;

    printf("Insert an integer number: ");
    if (scanf("%d", &num) != 1){
        printf("\nERROR: invalid input.");
        printf("\nExiting the program...\n");
        return 1;
    }
    num = (num < 0) ? (num * -1) : (num);
    printf("\nIt is %s.\n", (num % 2 == 0) ? "even" : "odd"); //here

    return 0;
}

/*Final note: the entire row can be replaced by an if condition, like this:
if (num % 2 == 0){
    printf("\nIt is even.\n");
}else{
    printf("\nIt is odd.\n");
}*/