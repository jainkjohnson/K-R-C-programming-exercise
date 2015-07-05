#include<stdio.h>
main()
{
	int c;

	while( (c = getchar()) != EOF) {
		//f( getchar() == EOF )
		//break;
		//printf("%d\n",c);
		putchar(c);
		
	}
	printf("%d %u %x at EOF",c,c,c);
}
