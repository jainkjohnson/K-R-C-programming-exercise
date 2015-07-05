#include<stdio.h>
int  i;
check_brace(int length[], int count)
{
	int left = 0, right = 0;
	for( i = 0; i < count; i++){
		if(length[i] == '{')
			left++;
		if(length[i] == '}')
			right++;
	}
		if(left != right)
			printf(" Unmatched Braces \n");
	
}

check_bracket(int length[], int count)
{
	int left = 0, right = 0;
	for( i = 0; i < count; i++){
		if(length[i] == '(')
			left++;
		if(length[i] == ')')
			right++;
	}
		if(left != right)
			printf(" Unmatched Brackets \n");
	
}

check_single(int length[], int count)
{
	int left = 0;
	for( i = 0; i < count; i++){
		if(length[i] == 39)
			left++;
	}
	if(left % 2 != 0)
			printf(" Unmatched Single Quotes \n");
		
}

check_double(int length[], int count)
{
	int left = 0;
	for( i = 0; i < count; i++){
		if(length[i] == 34)
			left++;
		
	}
		if(left % 2 != 0 )
			printf(" Unmatched Double Quotes \n");
	
}


				



main()
{
	int c, length[200], count = -1;

	while((c = getchar()) != EOF){
		count++;
		length[count] = c;
	}

	check_brace(length, count);
	check_bracket(length,count);
	check_single(length, count);
	check_double(length, count);
}
