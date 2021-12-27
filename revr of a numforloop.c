#include<stdio.h>
main()
{
	int n,d;
	
	for(scanf("%d",&n); n > 0; n = n / 10)
	{
		d = n % 10;
		 printf("%d",d);
	}
}

