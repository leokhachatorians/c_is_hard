#include <stdio.h>

int main(void) {
    int smallest, largest, n1, n2, n3, n4, i;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    int arr[4] = { n1, n2, n3, n4 };
    smallest = arr[0];
    largest = arr[0];

    for (i = 0; i < 4; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Smallest: %d\n", smallest);
    printf("Largest: %d\n", largest);
}
