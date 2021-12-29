#include<stdio.h>
main()
{
	float i,x,n;
	float sum = 0;
	
	scanf("%f",&n);
	scanf("%f",&x);
	
	for(i = 0; i <= n; i++)
	{
		sum = sum + (1 / x);
	}
	printf("%f = sum",sum);
}


