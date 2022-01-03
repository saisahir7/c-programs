#include<stdio.h>
main()
{
	int a = 23;
	int *p;
	
	printf("%d",sizeof(a));
	
	p = &a;
	
	printf("\n%d",sizeof(p));
}

