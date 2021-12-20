#include<stdio.h>
main()
{
	int n,i;
	
	printf("Enter number");
	scanf("%d",&n);
	
	while(i <= 10)	
	{
		 printf("%3d * %3d = %4d",n,i,n*i);
		 i++;
	}
}

