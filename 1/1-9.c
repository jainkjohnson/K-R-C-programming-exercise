#include<stdio.h>
main()
{
	int c,previous;

	previous = 1;

	while( (c = getchar()) != EOF){
		if( c == 32 ){
			if(previous != 32 ){
				putchar(c);
				previous = c;
			}
		}
		else{
			putchar(c);
			previous = c;
		}
	}
}

