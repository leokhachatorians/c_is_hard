#include <stdio.h>

int main() {
	int num, o1, o2, o3, o4, o5;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &num);

	o5 = num % 8;
	num = num / 8;

	o4 = num % 8;
	num = num / 8;

	o3 = num % 8;
	num = num / 8;

	o2 = num % 8;
	num = num / 8;

	o1 = num % 8;
	//num = num / 8;

	printf("In octal, your number is: %d%d%d%d%d\n", o1, o2, o3, o4, o5);
	return 0;
}
