/*Write a program in which, after the user input, it will print the relative ascii table number and vice versa
NOTE: When we get one of these errors, we won't ask for a new input (we will be more exaustive in the next lessons)*/

#include <stdio.h>

int main(){

    int opt = 0;

    again:
    printf("\nWrite 0 (zero) to get the ascii int value from a char.");
    printf("\nInstead, write 1 (one) to convert a number to the relative ascii char.");
    printf("\nWrite your choice: ");

    if (scanf("%d", &opt) != 1){
        printf("\nERROR: invalid input.");
        printf("\nExiting the program...\n");
        return 1;
    }else{
        
        switch (opt){

            // CHAR TO NUM
            case 0:

                char ch;
                while(1){

                    //in the next three rows: use the while to avoid the 'line feed' character at the first iteration
                    printf("\nInsert a character or write ' ' (space) to end: ");
                    while(getchar() != '\n'); //clear the buffer till \n character
                    ch = getchar();
                    
                    if (ch == ' '){
                        printf("\nYou've chosen to end the program.");
                        printf("\nExiting...");
                        break;
                    }
                    printf("\nyou typed the char %c", ch);
                    printf("\nASCII CODE: %d", ch);
                    
                }
                return 0;

            // NUM TO CHAR
            case 1:
                
                int num = 0;
                while(1){

                    printf("\nInsert an integer number to see the relative ascii char: ");
                    if (scanf("%d", &num) != 1){
                        printf("\nERROR: invalid input.");
                        printf("\nExiting the program...");
                        return 1;
                    }else{
                        if(num < 32 || num >= 127){ //this condition track negative inputs too.
                            printf("\nUnprintable character or negative input.");
                            printf("\nExiting the program...");
                            return 1;
                        }else{
                            printf("ASCII CHAR: %c", (char)num);
                        }

                    }

                }
                return 0;
            
            //INPUT != 0/1
            default: 
                printf("\nERROR: invalid choice.");
                printf("\nYou will be send to the beginning...\n");
                goto again;
        }

    }
    
    return 0;
}