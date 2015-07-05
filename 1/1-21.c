#include<stdio.h>
#define TABSTOP 3

main()
{
	int c, length[200], i, count = -1, space_count = 0;

	while(( c = getchar()) != EOF ){
		if ( c == 32 ){
			space_count++;
			if( space_count == TABSTOP ){
				count++;
				length[count] = 9;
				space_count = 0;
			}

		}	

		else{
			if( space_count != 0 ){
				for( i = 0; i < space_count; i++)
					count++;
					length[count] = 32;
			}

			count++;
			length[count] = c;
		}
	}

	for ( i = 0; i < count; i++)
		printf("%c", length[i]);
}
		
