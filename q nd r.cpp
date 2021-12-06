#include<stdio.h>
main()
{
	
	int a,b,quotient,remainder;
	
	printf("Enter a");
	scanf("%d",&a);
	
	printf("Enter b");
	scanf("%d",&b);

	quotient=a/b;
	remainder=a%b;
	printf("%d \n",quotient);
	printf("%d",remainder);
}

