#include<stdio.h>

reverse(int length[], int count)
{
	int i, rev[20];
	
	
	printf("Reverse =");	
	for(i = count-1 ;i>=0; i--){
		printf("%c",length[i]);
		
	}
	printf("\n");

}


main()
{
	int c, length[20], count = -1;

	while(( c = getchar()) != EOF){
		count++;
		length[count] = c;
		
	}
	reverse(length, count);
}
