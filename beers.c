#include <stdio.h>

int main () {
        
        // Set variables

        float cansOfBeerPerDay, costOfBeerPerDay;

        printf("How many cans of beer do you drink on average per day?\n");
        scanf("%f", &cansOfBeerPerDay);

        printf("How much would you say one can cost?\n");
        scanf("%f", &costOfBeerPerDay);

        printf("In a year you will have consumed: %.2f\n", cansOfBeerPerDay);

        return 0;
}