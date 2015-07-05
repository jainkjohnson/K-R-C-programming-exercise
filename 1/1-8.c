#include<stdio.h>
main()
{
	int c, tab=0, newline=0, blank=0;
	 
	while( (c = getchar()) != EOF){
		if( c== 10 )
			++newline;
		else if( c == 9 ){
			++tab;
		}
		else if( c == 32 ){
			++blank;
		}
		else{
			printf("%d",c);
		}
	}
	printf("\n%d newline and %d tab %d blank\n",newline,tab,blank);
}
