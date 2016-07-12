#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
	int c, nl, nw, nc, state;

	state = OUT;

	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		nc++;
		if (c == '\n') {
			nl++;
			// Exercise 1-12 portion
			// printf("%d %d %d\n", nl, nw, nc);
			// nl = nw = nc = 0;
		}
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		}
		else if (state == OUT) {
			state = IN;
			nw++;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}
