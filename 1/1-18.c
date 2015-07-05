#include<stdio.h>
main()
{
	int c, i, length[20], count = 0, space;

	while((c = getchar()) != EOF){
		if( c != 9 && c != 32 && c != 10){
			printf("#");
			length[count] = c;
			count++;
			space = 0;
		}
		else{
			//printf("#");
			if( c == 32 )
				space++;
				//printf("space %d",space);
			if( space <= 1 && c != 9 && c != 10){
				length[count] = c;
				count++;
			}
		}

		if( c == 10 ){
			for( i = 0; i < count; i++)
				printf("%c",length[i]);
		count = 0;
		}
	}
}	
