#include<stdio.h>
main()
{
	int n;
	
	scanf("%d",&n);
	
	switch(n%2)
	{
		case 0 : printf("even");
		         break;
		case 1 : printf("odd");
		         break;              
		default : printf("type only integer");
	}
}


