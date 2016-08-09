#include <stdio.h>

int main(void) {
    int ones, tens;

    printf("Enter a two-digit number: ");
    scanf("%1d%1d", &tens, &ones);

    switch (tens) {
        case 2: printf("Twenty"); break;
        case 3: printf("Thirty"); break;
        case 4: printf("Forty"); break;
        case 5: printf("Fifty"); break;
        case 6: printf("Sixty"); break;
        case 7: printf("Seventy"); break;
        case 8: printf("Eighty"); break;
        case 9: printf("Ninety"); break;
    }

    if (tens == 1) {
        switch (ones) {
            case 0: printf("Ten\n"); break;
            case 1: printf("Eleven\n"); break;
            case 2: printf("Twelve\n"); break;
            case 3: printf("Thirteen\n"); break;
            case 4: printf("Fourteen\n"); break;
            case 5: printf("Fifteen\n"); break;
            case 6: printf("Sixteen\n"); break;
            case 7: printf("Seventeen\n"); break;
            case 8: printf("Eighteen\n"); break;
            case 9: printf("Nineteen\n"); break;
        }
    }
    else {
        switch (ones) {
            case 1: printf("-one\n"); break;
            case 2: printf("-two\n"); break;
            case 3: printf("-three\n"); break;
            case 4: printf("-four\n"); break;
            case 5: printf("-five\n"); break;
            case 6: printf("-six\n"); break;
            case 7: printf("-seven\n"); break;
            case 8: printf("-eight\n"); break;
            case 9: printf("-nine\n"); break;
        }
    }
    return 0;
}
