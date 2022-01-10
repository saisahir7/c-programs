#include<stdio.h>
void prod(int a,int b,int c)
{
	int d = a * b * c;
	
	printf("%d",d);
}

int main(void)
{
	prod(5,6,7);
	return 0;
}

