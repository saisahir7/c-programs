#include<stdio.h>
main()
{
	int i,n,temp,r,fact,sum = 0;
	
	scanf("%d",&n);
	
	temp = n;
	
	while(n > 0)
	{
		r = n % 10;
		fact = 1;
		for( i = 1; i <= r; i++)
	{
		fact = fact * i;
	}
	sum = sum + fact;
	n = n / 10;
   }	
   if(sum == temp)
	{
		printf("%d is a strong number\n",temp);
	}
   else
	{
		printf("%d is not a strong number\n",temp);
	}
}

