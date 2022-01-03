#include<stdio.h>
main()
{
	int a = 25;
	float b = 4.666;
	char c = 't';
	
	printf("%d",b);
	printf("\n%d",a);
	printf("\n%d",c);
	
	int *p;
		
	p = &a;
	
	printf("using &a %p",&a);
	printf("using pointer %p",p);
}


