#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("Enter integers");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a == b && b == c && c == a)
		{
			printf("3");
		}
		else
		    if(a == b || b == c || a == c)
		    {
		    	printf("2");
			}
			else
			{
				printf("0");
			}
}

