#include<stdio.h>
#define MAX 10

main()
{
	int c, i, length[MAX], temp[MAX], count, largest = 0, len = 1;

	while( len > 0 ){
		count = -1;
		while(( c = getchar()) != 10 ){
				count++;
				length[count] = c;
				
		}
		if( largest < count ){
			largest = count;
			for ( i = 0; i <= count; i++)
				temp[i] = length[i];
			
		}
		/*for( i = 0; i <= count; i++)
			printf("%c", length[i]);
		printf("%d", count);	*/	
		if( count == -1)
			len = 0;
	}
	for( i = 0; i <= largest; i++)
		printf("%c", temp[i]);
}

