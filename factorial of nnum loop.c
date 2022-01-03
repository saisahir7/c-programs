#include<stdio.h>
main()
{
	int i,n,fact = 1;
	
	scanf("%d",&n);
	
	for(i = 1; i <= 5; i++)
	{
		fact = fact * i;
	}
	printf("factorial of %d is %d",n,fact);
}

