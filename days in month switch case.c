#include<stdio.h>
main()
{
	int month;
	
	scanf("%d",&month);
	
	switch(month)
	{
		case 2 : printf("28 days");
		         break;
		case 4 :
		case 6 :
		case 9 :
		case 11 : printf("30 days");
		          break;
		
		default : printf("31 days");
	}
}

