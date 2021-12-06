#include<stdio.h>
main()
{
	int wh,hr;
	float earnings;
	
	scanf("%d%d",&wh,&hr);
	
	if(wh <= 40)
	{
		earnings = hr*wh;
	}
	else
	{
		earnings = (40 * hr) + (wh - 40) * (hr * 1.5);
	}
	printf("earnings are %f",earnings);
}

