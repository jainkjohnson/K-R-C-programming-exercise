#include<stdio.h>
main()
{
	float faren;
	
	for(faren = 300; faren>=0; faren = faren - 20){
		printf("%f %f \n", faren, (5.0/9.0) * (faren-32));
	}
}

