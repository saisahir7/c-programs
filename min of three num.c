#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("Enter value a");
	scanf("%d",&a);
	
	printf("Enter value b");
	scanf("%d",&b);
	
	printf("Enter value c");
	scanf("%d",&c);
	
	if(a<b&&a<c)
	{
		printf("a is min");
	}
	else
	   if(b<c)
	  {
 		 printf("b is min");
      }
    else
    {
    	printf(" c is min");
	}
}


