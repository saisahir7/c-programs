#include<stdio.h>
main()
{
	int n,i,sum=0;
	
	scanf("%d",&n);
	
	while(i <= n)
	{
		sum = sum + i;
		i++;
	}
	  printf("sum = %d",sum);
}


