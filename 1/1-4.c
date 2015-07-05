#include<stdio.h>
main()
{
	int lower, higher, step;
	float celsius, faren;

	lower = 0;
	higher = 100;
	step = 2;

	celsius = lower;
	while(celsius <= higher){
		faren = celsius * (9.0/5.0) + 32.0;
		printf("%3.0f %6.1f \n",celsius,faren);
		celsius = celsius + step;
	}
}
