#include<stdio.h>
main()
{
	int i = 1,x,y,power = 1;
	
	scanf("%d",&x);
	scanf("%d",&y);
	
	while(i <= y)
	{
		power = x * power;
		i++;
	}
	printf("%d ^ %d = %d",x,y,power);
}

