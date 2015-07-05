#include<stdio.h>

float cel_to_faren(float step)
{
	float faren;
	faren = step * (9.0 / 5.0) + 32.0;
	return faren;
}

main()
{
	int i; 
	float step = 0, higher = 300;
	for (i = 0; step <= 300; step = step + 2){
		printf("%f is %f\n",step,cel_to_faren(step));
	}
}

