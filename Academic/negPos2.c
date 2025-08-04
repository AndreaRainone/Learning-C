/*Just like before but:
SECOND METHOD: using math.h library and % operand*/

#include <stdio.h>
#include <math.h>

int main(){

    int num = 0;
    printf("Insert an integer number: ");
    if(scanf("%d", &num) != 1){
        printf("\nERROR: invalid input.");
        printf("\nExiting the program...\n");
        return 1;
    }else{
        num = abs(num);
        printf("\n%d", num);
        printf("\nIt is %s.\n", (num % 2 == 0) ? "even" : "odd"); //here
    }

    return 0;
}

/*Final note: the entire row can be replaced by an if condition, like this:
if (num % 2 == 0){
    printf("\nIt is even.\n");
}else{
    printf("\nIt is odd.\n");
}*/