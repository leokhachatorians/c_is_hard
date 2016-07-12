#include <stdio.h>

#define MAX 20
#define IN 	1
#define OUT	0

main() {
	int state = OUT;
	int cw = 0;
	int nwords[MAX], i, x, c;

	for (i = 0; i < MAX; i++) {
		nwords[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
			if (cw > 0) {
				nwords[cw]++;
			}
			cw = 0;
		}
		else if (state == OUT) {
			state = IN;
		}

		if (state == IN) {
			cw++;
		}
	}
	
	for (i = 0; i < MAX; i++) {
		printf("%2d ", i);
		for (x = 0; x < nwords[i]; x++) {
			printf("|");
		}
		printf("\n");
	}
}
