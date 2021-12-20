#include<stdio.h>
main()
{
	int n,i = 1,sum = 0;
	
	scanf("%d",&n);
	
	while(i <= n)
	{
		sum+= i * i;
		i++;
	}
	  printf("%d",sum);
}


