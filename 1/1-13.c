#include<stdio.h>
main()
{
	int c, count = 0, length[10], temp = -1;
	int i, j, histo;

	for( i = 0; i < 10; i++){
		length[i] = 0;
	}
	while((c=getchar()) != EOF){
		if(c == ' '){
			++temp;
			//printf("count1 = %d",count);
			length[temp] = count;
			count = 0;
			
		}
		else{
			//printf("count = %d",count);
			++count;
		}
	}

	for(i=0;i<=temp;i++)
		printf("len = %d\n",length[i]);
	for( i = -1; i <= temp; i++){
		 histo = length[i];
		 for( j = 0; j < histo; j++){
			 printf("#");
		 }
		 printf("\n");
	}
}



