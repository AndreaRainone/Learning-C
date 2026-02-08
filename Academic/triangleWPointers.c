/*
 * Write a C program that:
 * - Asks for the two sides of a right triangle and
 *  - gives the hypotenuse
 *
 *  REQUIREMENTS:
 *  - SIDE EFFECT: update the pointer of two variables with triangle area/perimeter
 *  - float hypotenuse (float c1, float c2, float *perimeter, float *area)
 *  - use "double sqrt(double arg)" of math.h library
 */

#include <stdio.h>
#include <math.h>

float hypotenuse(float c1, float c2, float *perimeter, float *area) {
    float result = hypotf(c1, c2);
    *perimeter = c1 + c2 + result;
    *area = (c1 * c2) / 2.0f;
    return result;
}

int main(void) {
    float c1, c2;
    float perimeter, area;
    float result;

    printf("Insert the two sides of the triangle: ");
    if (scanf("%f%f", &c1, &c2) != 2) {
        printf("\nError: invalid input. Exiting the program...");
        return 1;
    }

    result = hypotenuse(c1, c2, &perimeter, &area);
    printf("\nThe result is: %.2f", result);

    return 0;
}
