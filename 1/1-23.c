#include<stdio.h>
main()
{
	int i, c, length[30], count = -1, flag = 0;
	
	while ( (c = getchar()) != EOF){
		if( c == '/'){
			flag++;
		}
		if( flag == 2 || flag == 1){
			if( c == 10 ){
				//count++;
				//length[count] = c;
				flag = 0;
			}
			//printf("comment");
		}
		else{
			//printf("first");
			count++;
			length[count] = c;
		}
	}
	printf("%d",count);
	for (i = 0; i < count; i++)
		printf("%c", length[i]);	
}


