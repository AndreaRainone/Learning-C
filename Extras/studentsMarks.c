/*This exercise recap the first three lessons. The prompt has been given by chatgpt (to be solved in 'main' only):
Write a program where the user has to insert how many students have to be evaluated
TASKS (for each student):
a) Insert three integer marks between 0 and 30
b) Calculate their average as a float
c) Define the student status using the average:
   failed: average < 18
    passed: average between 18 and 30
    IF THE AVERAGE IS == 30
        ask the user: "with honors (y or Y / n or N)":
            y = Passed with honors +1
            n = Passed without honors +1
d) Print how many students have failed, passed with or w/o honors, the class average
*/

#include <stdio.h>

#define RESET   "\033[0m"       //RESET
#define GREEN   "\033[32m"      //GREEN
#define RED     "\033[31m"      //RED
#define BOLDYELLOW  "\033[1m\033[33m"      //BOLD YELLOW

int main() {

    int students = 0;
    int honors = 0, noHonors = 0, fails = 0; //summary votes variables

    printf("How many students you want to evaluate: ");
    //check for valid input students. Post-condition: exit if it's invalid
    if (scanf("%d", &students) != 1) {
        printf(RED "\nERROR: invalid input.");
        printf(RED "\nExiting the program...\n");
        return 1;
    }
    else {
        if (students == 0) {
            printf(RED "\nERROR: you can't evaluate zero students.");
            printf(RED "\nExiting the program...\n");
            return 1;
        }

        float mark = 0.0;
        float temp = 0.0;
        int divisor = 0;
        float average = 0.0;

        float total = 0; // final mark results
        float finalAverage = 0.0; // self explain

        //Student loop
        for (int i = 1; i <= students; i++) {

            printf("\nSTUDENT %d:", i);
            printf("\n");

            //marks loop
            int j = 1;
            while (j <= 3) {

                printf("\nInsert mark %d (from 0 to 30):", j);

                //check for valid input. Post-condition: exit if it's invalid
                if (scanf("%f", &temp) != 1) {
                    printf(RED "\nERROR: invalid mark.");
                    printf(RED "\nExiting the program...");
                    return 1;
                }
                else {

                    if (temp < 0 || temp > 30) {
                        printf(RED "\nThe mark has to be between 0 and 30\n");
                        //resetting the used variables to zero to restart the loop
                        j = 1;
                        temp = 0.0, divisor = 0, mark = 0.0;

                    }
                    else {

                        mark += temp;
                        divisor++;
                        j++;

                        //clear buffer from other inputs
                        //EOF to avoid infinite loops when the user closes the input stream accidentally 
                        int ch;
                        while ((ch = getchar()) != '\n' && ch != EOF);

                    }
                }

            }
            average = mark / divisor;
            finalAverage += average;
            printf("\n-> The average is: %.2f", average);

            //Checking average and honors block
            if (average < 18) {
                printf(RED "\n-> FAILED" RESET);
                fails++;
            }else if (average == 30) {

                char yn;
                printf("\nDoes he/she deserve the honors? (y/n): ");
                yn = getchar();
                
                if (yn == 'y' || yn == 'Y') {
                    printf(BOLDYELLOW "-> PASSED WITH HONORS.\n" RESET);
                    honors++;
                }
                else if (yn == 'n' || yn == 'N') {
                    printf(GREEN "-> PASSED.\n" RESET);
                    noHonors++;
                } 
            }else {
                printf(GREEN "\n-> PASSED\n" RESET);
                noHonors++;
            }

            //restore the variables 'temp' , 'mark' , 'divisor' to clear from the previous input
            mark = 0.0, temp = 0.0, divisor = 0;

        }

        //FINAL PRINTOUTS
        total = finalAverage / students;
        printf("\n\n");
        printf(RED "\nFINAL RESULTS:" RESET);
        printf("\nPROMOTED WITH HONORS: %d", honors);
        printf("\nPROMOTED WITHOUT HONORS: %d", noHonors);
        printf("\nFAILS: %d", fails);
        printf("\nThe class average is: %.2f\n", total);
    }

    return 0;
}