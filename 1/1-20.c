#include<stdio.h>
#define TABSTOP 5
int c;

main()
{
	extern int c;
        int length[20], count = -1, i, flag = 0;


	while((c = getchar()) != EOF){
		if( c == 9 ){
			for( i = 0; i < TABSTOP; i++ ){
				c = 32;
				count++;
				length[count] = c;
			}
		}
		else{
			count++;
			length[count] = c;
		}

	}

	for( i = 0; i < count; i++)
		printf("%c", length[i]);
	
}	

