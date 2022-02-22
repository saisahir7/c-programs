#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("Enter sides");
	scanf("%d%d%d",&a,&b,&c);
	
	if((a + b > c) && (b + c > a) && (a + c > b))
	{
		if(a == b == c)
		{
			printf("Equilateral triangle");
		}
		else
		    if(a == b || b == c || a == c)
		    {
		    	printf("Isosceles triangle");
			}
			else
			{
				printf("Scalene triangle");
			}
	}
	else
	{
		printf("Triangle not possible");
	}
}


