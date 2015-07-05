#include<stdio.h>
main()
{
	int c, length[150], i;

	for( i = 0; i < 150; i++)
		length[i] = 0;
	while((c = getchar()) != EOF){
		length[c]++;
	}
	for( i = 97; i <= 122; i++){
		printf("%c is %d\n",i ,length[i]);
	}
}

		
