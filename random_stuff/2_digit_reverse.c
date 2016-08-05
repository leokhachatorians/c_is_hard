#include <stdio.h>

int main() {
    int num, a, b;

    printf("Enter a two digit number: ");
    scanf("%2d", &num);

    a = num % 10;
    b = num / 10;

    printf("The reversal is: %d%d\n", a, b);
    return 0;
}
