#include <stdio.h>
#include <string.h>

#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);
void rev_array(char to[], char from[], int len);

main()
{
	int len, max;
	char line[MAXLINE];
	char longest[MAXLINE];
	char test[MAXLINE];
	
	max = 0;
	while ((len = get_line(line, MAXLINE)) > 0) {
		if (len> 80) {
			printf("%s", line);
		}
		if (len > max) {
			max = len;
			copy(longest, line);
			rev_array(longest, line, len);
		}
	}
	if (max > 0) {
		printf("%s", longest);
	}
	return 0;
}

/* get line: read a line into s, return its length */
int get_line(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to' */
void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0') {
		i++;
	}
}

void rev_array(char to[], char from[], int len)
{
	int i;
	int j = 0;
	for(i = len - 1, i > 0, j < len; i--; j++) {
		to[j] = from[i];
	}
	to[len] = from[len];
}

