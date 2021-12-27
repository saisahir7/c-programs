#include<stdio.h>
main()
{
	int n,i;
	
	scanf("%d",&n);
	
	for(i = 1; i <= 20; i++)	
	{
		 printf("\n%3d * %3d = %4d",n,i,n*i);
	}
}


