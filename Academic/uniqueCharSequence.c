/*
 * Write a C program in which:
 * - Asks for a char sequence
 * - Output: the char sequence, in the same order, but without repeated char
 * EXAMPLE: "HAPPY HALLOWEEN" ---> "HAPY HALOWEN"
 *
 * REQUIREMENTS:
 * - int main(void)
 * - read_chars(char[]) which read the chars and insert them into the array
 * - remove_repeatedChars(char[], char[]) which gives back an array without repeated chars
 */

#include <stdio.h>
#include <string.h>

#define ARRAY_LENGHT 100

void read_chars(char array[]) {
    fgets(array, ARRAY_LENGHT, stdin);
    array[strlen(array) - 1] = '\0'; //Modify '\n' char with the char array terminator. Otherwise \n will be written in the array
}

void remove_repeatedChars(char array[], char out[]) {
    char temp;
    int j = 0, k = 0;

    while (array[j] != '\0') {
        temp = array[j];

        int found = 0;

        for (int i = 0; i < k; i++) {
            if (out[i] == temp) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            out[k] = temp;
            k++;
        }
        j++;
    }

    out[k] = '\0';
}

int main(void) {
    char array[ARRAY_LENGHT];
    char out[ARRAY_LENGHT];
    printf("\nInsert a string: ");

    read_chars(array);
    remove_repeatedChars(array, out);

    printf("\nWithout duplicates: %s", out);
    return 0;
}
