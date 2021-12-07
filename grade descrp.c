#include<stdio.h>
main()
{
	char ch;
	
	printf("Enter grade"); 
	scanf("%c",&ch);
	
	if(ch =='E')
	{
		printf("Excellent");
	}
	else
	    if(ch =='V')
	    {
	    	printf("Very Good");
		}
	else
	      if(ch =='G')
	      {
	      	printf("Good");
		  }
	else
	        if(ch =='A')
	        {
	        	printf("Average");
			}
	else
	         if(ch =='F')
	         {
	         	printf("Fail");
			 }
}

