#include<stdio.h>
main()
{
	int n;
	
	printf(" enter value n");
	scanf("%d",&n);
	
	switch(n>0)
	{
		case 1 : printf("number is positive");
		         break;
		         
		case 0 : switch(n==0)
	     {	
		case 1 : printf("0");
		        break;
		case 0 : printf("number is negative");
		         break;
	    }
   }
}






