#include<stdio.h>
main()
{
	float i,n;
	float sum = 0;
	
	scanf("%f",&n);
	
	for(i = 1; i <= n; i++)
	{
		sum = sum + (1 / i);
	}
	printf("%f = sum",sum);
}


