#include<stdio.h>
main()
{
	int n,r,sum = 0;
	
	for(scanf("%d",&n); n != 0; n = n / 10)
	{
		r = n % 10;
		sum+= r * r;
	}
	printf("sum = %d",sum);
}

