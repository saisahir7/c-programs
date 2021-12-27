#include<stdio.h>
main()
{
	int i,x,y,power = 1;
	
	scanf("%d",&x);
	scanf("%d",&y);
	
	for(i = 1; i <= y; i++)
	{
		power = x * power;
	}
	printf("%d ^ %d = %d",x,y,power);
}

