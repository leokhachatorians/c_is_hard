#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define MAXOP 	100
#define NUMBER	'0'
#define MAXVAL	100
#define BUFSIZE 100

int sp = 0; // next free stack position
double val[MAXVAL]; // value stack
char buf[BUFSIZE]; // buffer for ungetch
int bufp = 0; // next free position in buf

int getop(char []);
void push(double f);
double pop(void);
int getch(void);
void ungetch(int i);


main() {
	int type;
	double op2;
	char s[MAXOP];

	while ((type = getop(s)) != EOF) {
		switch (type) {
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() + pop());
				break;
			case '-':
				op2 = pop();
				push(pop() - op2);
				break;
			case '/':
				op2 = pop();
				if (op2 != 0.0) {
					push(pop() / op2);
				}
				else {
					printf("ERROR: Cannot divide by zero\n");
				}
				break;
			case '%':
				op2 = pop();
				push((int)pop() % (int)op2);
			case '\n':
				printf("\t%.8g\n", pop());
				break;
			default:
				printf("ERROR: Unknown command <%s>\n", s);
				break;
		}
	}
	return 0;
}

// push: push f onto value stack
void push(double f) {
	if (sp < MAXVAL) {
		val[sp++] = f;
	}
	else {
		printf("ERROR: Stack is full, cannot push <%g>\n", f);
	}
}

// pop: pop and return top value from stack
double pop(void) {
	if (sp > 0) {
		return val[--sp];
	}
	else {
		printf("ERROR: Stack is empty\n");
		return 0.0;
	}
}

// getop: get next operator or numeric operand
int getop(char s[]) {
	int i, c;

	while ((s[0] = c = getch()) == ' ' || c == '\t') {;}

	s[1] = '\0';
	if (!isdigit(c) && c != '.') {
		return c; // not a number
	}
	i = 0;
	if (isdigit(c)) { // collect integer part
		while (isdigit(s[++i] = c = getch())) {;}
	}
	if (c == '.') { // collect fracton part
		while (isdigit(s[++i] = c = getch())) {;}
	}
	s[i] = '\0';
	if (c != EOF) {
		ungetch(c);
	}
	return NUMBER;
}

int getch(void) { // get a possible pushed back character
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c) { // push character back on input
	if (bufp >= BUFSIZE) {
		printf("Ungetc: too many characters\n");
	}
	else {
		buf[bufp++] = c;
	}
}
