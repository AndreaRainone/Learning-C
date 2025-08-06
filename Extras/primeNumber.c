/* Write a program that takes an integer number and calculate the sum of the prime numbers less than it.
Requirements:
1. let the user to choose a number (positive integer)
2. Find all the prime numbers from two to the chosen number
3. sum them and print the result
4. the program has to check if the number is prime through a division loop.
5. if the user gives 0 or negative number as input, then the program has to ask for a new number.*/

#include <stdio.h>
#include <math.h>

//welcome function. It explain what the program does.
void welcome(){
    printf("\nWelcome, this program will provide the sum of any prime number between two and your number!");
    printf("\nYou just have to write down the upper limit.\n");
}

//buffer clean function
int clearBuffer(){
    int ch;
    while((ch = getchar()) != '\n' && ch != EOF);
}

//Input validation function
int validation(){
    int num = 0;

    while (1) {
        printf("Insert an integer number greater than 0: ");
        if (scanf("%d", &num) != 1) {
            printf("\nERROR: invalid input.\n");
            clearBuffer();
        } else if (num <= 0) {
            printf("Number must be greater than 0.\n");
        } else {
            return num;
        }
    }
}

/*look for every prime numbers function and sum them
Note: we will find every possible factor from 2 to the sqrt of the number
Note 2: generally we can have imperfect square root, so we will cast the result to take the int part only*/

int primeNumCheck(int validated){

    int sum = 0;

    //scanning each number from 2 to the user number
    for (int i = 2; i <= validated; i++){

        int isPrime = 1;
        int integerPart = (int)sqrt(i);

        /*for each number I will test if it's prime.
        if it's prime, then store the number*/
        for(int j = 2; j <= integerPart; j++){

            if ((i % j) == 0){
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1){
            sum += i;
        }
        
    }

    return sum;
}


int main(){

    welcome();
    int userNum = validation();
    int result = primeNumCheck(userNum);
    
    printf("\nThe sum of each prime number between 2 and your number is: %d", result);

    return 0;
}