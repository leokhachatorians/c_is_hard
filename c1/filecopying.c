#include <stdio.h>

//main()
//{
//	int c;
//
//	c = getchar();
//	while (c != EOF) {
//		putchar(c);
//		c = getchar();
//	}
//}

//main()
//{
//	int c;
//	
//	while ((c = getchar()) != EOF)
//		putchar(c);
//}

//main ()
//{
//	printf("%d", EOF);
//}

main() 
{
	int c;

	while((c = getchar()) != EOF) {
		printf("%d",c != EOF);
		putchar(c);
	}
	printf("\n%d\n", c != EOF);

}

