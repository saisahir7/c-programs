#include<stdio.h>
main()
{
	int hgt;
	
	printf("Enter height");
	scanf("%d",&hgt);
	
	if(hgt == 150)
	{
		printf("Average height");
	}
	else
	   if(hgt > 150)
	   {
	   	printf("Tall");
	   }
	   else
	   {
	   	printf("Short");
	   }
}

