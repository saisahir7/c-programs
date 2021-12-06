#include<stdio.h>
main()
{
	int n;
	
	printf("Enter value n");
	scanf("%d",&n);
	
	if(n%5==0&&n%11==0)
	{
		printf("it is divisible");
	}
	else
	{
		printf("it is not divisible");
	}
}

