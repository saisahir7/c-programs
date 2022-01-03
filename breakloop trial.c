#include<stdio.h>
main()
{
	int i;
	
	for(i = 1; i <= 50; i++)
	{
		if(i == 9)
		continue;
		printf("\n%d",i);
	}
}

