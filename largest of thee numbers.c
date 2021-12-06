#include<stdio.h>
int main()
{
	int a,b,c;
	printf(" enter the values");
	scanf("%d%d",&a,&b);
	if(a>b && a>c)
	{ 
	printf("a is largest number");
    }
	else if(b>a && b>c)
	{
		printf("b is the largest number");
	}
	else
	{ 
	printf("c is largest number");
	}
    return(0);
}
