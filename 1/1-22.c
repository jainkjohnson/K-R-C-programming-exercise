#include<stdio.h>
#define FOLD 5
main()
{
	int c, count = -1, length[200], i, temp = 0;

	while( (c = getchar()) != EOF){
		if ( temp == FOLD ){
			count++;
			length[count] = 10;
			if( c != 10 ){
				count++;
				length[count] = c;
				temp = 1;
			}else
				temp = 0;
		}
		else{
			if ( c == 32 ){
				count++;
				length[count] = 10;
				temp = 0;
			}
			else{
				temp++;
				count++;
				length[count] = c;
			}
		}


					
	}
	for( i = 0; i < count; i++ )
		printf("%c", length[i]);
}

