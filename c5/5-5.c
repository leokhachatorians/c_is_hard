#include <stdio.h>

main() {
	char p[] = "hello";
	char t[] = "not sure";
	
	printf("Before: %s\n", &p);
	printf("Before: %s\n", &t);
	str_cpy(&p, &t);
	printf("After: %s\n", &p);
	printf("After: %s\n", &t);
	//char o[] = 0;
}

void str_cpy(char *s, char *t) {
	while (*s++ = *t++)
		;
}
