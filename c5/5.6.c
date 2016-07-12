#include <stdio.h>
#include <string.h>

#define MAXLINES 5000
#define MAXLEN 1000

char *lineptr[MAXLINES];
char *alloc(int);
int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);
void qsort(char *lineptr[], int left, int right);
int get_line(char *, int);

main() {
	int nlines;

	if((nlines = readlines(lineptr, MAXLINES)) >= 0) {
		qsort(lineptr, 0, nlines-1);
		writelines(lineptr, nlines);
		return 0;
	}
	else {
		printf("ERROR: input too big to sort\n");
		return 1;
	}
}

void qsort(char *v[], int left, int right) {
	int i, last;
	void swap(char *v[], int i, int j);

	if (left >= right) {
		return;
	}
	swap(v, left, (left + right)/2);
	last = left;
	for (i = left+1; i <= right; i++) {
		if (strcmp(v[i], v[left]) < 0) {
			swap(v, ++last, i);
		}
	}
	swap(v, left, last);
	qsort(v, left, last - 1);
	qsort(v, last + 1, right);
}

void swap(char *v[], int i, int j) {
	char *temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

int readlines(char *lineptr[], int maxlines) {
    int len, nlines;
    char *p, line[MAXLEN];

    nlines = 0;

    while ((len = get_line(line, MAXLEN)) > 0) {
    	if (nlines >= maxlines || (p = malloc(len)) == NULL) {
    		return -1;
    	}
    	else {
    		strcpy(p, line);
    		lineptr[nlines++] = p;
    	}
    }
    return nlines;
}

int get_line(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim-2 && (c=getchar()) != EOF && c != '\n'; i++) {
		s[i] = c;
	}
	if (c =='/n') {
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return i;
}

void writelines(char *lineptr[], int nlines) {
	while (nlines-- > 0) {
		printf("%s\n", *lineptr++);
	}
}
