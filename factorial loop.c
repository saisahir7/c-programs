#include<stdio.h>
main()
{
	int n,i = 1,fact = 1;
	
	scanf("%d",&n);
	
	while(i <= n)
	{
		
		fact = fact * i;
		i++;
	}
	printf("factorial of %d is %d",n,fact);
}

