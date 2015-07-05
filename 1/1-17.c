#include<stdio.h>
main()
{
	int c, length[10], i, count = 0;

	for(i = 0; i < 10; i++)
		length[i] = 0;
	while((c = getchar()) != EOF){
		if (c == 10 && count >= 8){
			for(i = 0; i < count; i++)
				printf("%c", length[i]);
			count = 0;

		}
		else{
			if(c == 10){
				count = 0;
			}
			else{	
				length[count] = c;
				count++;
			}
		}
	}
}

