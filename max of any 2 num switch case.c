#include<stdio.h>
main()
{
	int a,b;
	
	printf("Enter the  numbers");
	scanf("%d%d",&a,&b);
	
	switch(a>b)
	{
		case 0 : printf("%d is max",b);
		         break;
		case 1 : printf("%d is max",a);
		         break;
	}
}


