#include<stdio.h>
void max(int a,int b)
{
	if(a > b)
	{
		printf("max is %d",a);
	}
	else
	{
		printf("max is %d",b);
	}
}

int main(void)
{
	int a,b;
	
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	max(a,b);
}

