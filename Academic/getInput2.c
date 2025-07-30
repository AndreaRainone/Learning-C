/*Take the previous code and do these steps before printing the result:
1. Increase by one
2. Divide by the half of the actual value
3. Subtract the double of the actual value
4. Decrement by one
5. Print the result*/

#include <stdio.h>

int main(){

    int number = 0;
    printf("Write an integer number: ");
    scanf("%d", &number);
    number++;
    
    //Before doing the second point, we should check the valid value (risks: division by zero)
    //NOTE: Before the number being divided, the "half" is truncated to the int part.
    int half = (number / 2);
    if (half != 0){
        number = number / half;
    }else{
        printf("\nDivision by zero not allowed");
        return 1;
    }

    number -= number*2;
    number--;
    printf("The updated number is: %d\n", number);

    return 0;
}