#include<stdio.h>
main()
{
	int n,r,product = 1;
	
	for(scanf("%d",&n); n != 0; n = n / 10)
	{
		r = n % 10;
		product *= r;	
	}
	printf("product = %d",product);
}

