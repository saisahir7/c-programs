#include<stdio.h>
main()
{
	int n,x,k;
	scanf("%d",&n);
	int u=n;
	while(n>0)
	{
		x=n%10;
		k=k*10+x;
		n=n/10;
	}
	if (u==k)
	{
		printf("it is a palindrome");
	}
	else
	{
		printf("it is not a palindrome");
	}
	
}
