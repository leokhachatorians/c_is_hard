#include <stdio.h>

int main(void) {
    int knots;

    printf("Enter windspeed in knots: ");
    scanf("%d", &knots);

    if (knots >= 63) {
        printf("Hurricane\n");
    }
    else if (knots >= 48) {
        printf("Storm\n");
    }
    else if (knots >= 27) {
        printf("Gale\n");
    }
    else if (knots >= 4) {
        printf("Breeze\n");
    }
    else if (knots >= 3) {
        printf("Light Air\n");
    }
    else {
        printf("Calm\n");
    }
    return 0;
}

