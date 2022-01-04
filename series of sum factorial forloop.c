#include<stdio.h>
main()
{
	int x,i,n,j,fact = 1;
	float sum = 0;
	
	scanf("%d",&n);
	scanf("%d",&x);
	
	for(i = 1; i <= n; i++)
	{
		fact = fact * i;
		sum = sum + (pow(x,i) / fact);
	}
	printf("%f",sum);
}

