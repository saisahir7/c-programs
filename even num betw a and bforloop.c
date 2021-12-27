#include<stdio.h>
main()
{
	int i,a,b;
	
	scanf("%d%d",&a,&b);
	
	for(i = a; i < b; i++)
	{
		if(a % 2 == 0)
		{
			printf("\n%d",a);
		}
		a++;
	}
}

