#include<stdio.h>
main()
{
	int i,j,a,b,fact,sum = 0;
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	for(i = a; i <= b; i++)
	{
		fact = 1;
	    for(j = 1; j <= i; j++)
		 {
			 fact = fact * j;
		 }
		sum = sum + fact;
	}
	printf("%d",sum);
}

