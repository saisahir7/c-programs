#include<stdio.h>
main()
{
	int a,b;
	
	scanf("%d%d",&a,&b);
	
	while(a<b)
	{
		if(a%2==0)
		
    	printf("\n%d",a);	
		a++;
	}
}

