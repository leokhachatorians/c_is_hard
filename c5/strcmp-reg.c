int strcmp(char *s, char *t);
int strcmp2(char *s, char *t);

main() {

	char p[] = "hello";
	char t[] = "hdllo";

	int value = strcmp(p, t);
	printf("%d\n", value);

	int value2 = strcmp2(p, t);
	printf("%d\n", value2);
	
}

int strcmp(char *s, char *t) {
	int i;

	for(i = 0; s[i] == t[i]; i++) {
		if (s[i] == '\0') {
			return 0;
		}
	}
	return s[i] - t[i];
}

int strcmp2(char *s, char *t) {
	for( ; *s == *t; s++, t++) {
		if (*s == '\0') {
			return 0;
		}
	}
	return *s - *t;
}
