#include<stdio.h>
main()
{
	char ch;
	
	printf("Enter a character");
	ch=getchar();
	
	if(islower(ch))
	{
		printf("lowercase letter");
	}
	else
	{
		printf("uppercase letter");
	}
}

	

