#include <stdio.h>

main() {
	int x = 1, y = 2, z[10];
	int *ip;

	ip = &x;

	printf("Value of Y before: %d\n", y);
	y = *ip;
	printf("Value of Y after: %d\n", y);

	printf("Value of X before: %d\n", x);
	*ip = 0;
	printf("Value of X after: %d\n", x);

}
