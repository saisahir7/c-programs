#include<stdio.h>
void num(int n)
{
	if(n % 2 == 0)
	{
		printf("%d is even",n);
	}
	else
	{
		printf("%d is odd",n);
	}
}

int main(void)
{
	int n;
	
	printf("Enter number");
	scanf("%d",&n);
	
	num(n);
}


