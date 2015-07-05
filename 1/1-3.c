#include<stdio.h>
main()
{
	int step, lower, higher;
	float celsius, faren;
	
	lower = 0;
	higher = 300;
	step = 2;

	faren = lower;
	while(faren <= higher){
		celsius = (5.0/9.0) * (faren-32.0);
		printf("%3.0f %6.1f \n",faren,celsius);
		faren = faren + 2;
	}
}

	       		
		
