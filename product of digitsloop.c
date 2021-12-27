#include<stdio.h>
main()
{
	int n,r,product = 1;
	
	scanf("%d",&n);
	
	while(n != 0)
	{
		r = n % 10;
		n = n / 10;
		product *= r;	
	}
	printf("product = %d",product);
}

