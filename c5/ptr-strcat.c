void strcat_reg(char s[], char t[]);
void strcat_ptr(char *s, char *t);


void strcat_reg(char s[], char t[]) {
	int i, j;

	i = j = 0;

	while (s[i] != '\0') {
		i++;
	}
	while ((s[i++] = t[j++]) != '\0') {;}
}

void strcat_ptr(char *s, char *t) {
	while (*s != '\0') {
		*t++;
	}
	while ((*s++ == *t++) != '\0') {;}
}

main () {

	char s[] = "test";
	char t[] = "ing";

	printf("%s\n", s);
	printf("%s\n", t);
	strcat_reg(s, t);
	printf("%s\n", s);
	printf("%s\n", t);


	char a[] = "test";
	char b[] = "ing";

	printf("%s\n", a);
	printf("%s\n", b);
	strcat_reg(a, b);
	printf("%s\n", a);
	printf("%s\n", b);



}
