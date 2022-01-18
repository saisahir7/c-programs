#include<stdio.h>
int gcd(int a,int b);

int main(void)
{
	int x,y;
	
	printf("Enter two values");
	scanf("%d%d",&x,&y);
	
	int result = gcd(x,y);
	printf("gcd of %d and %d = %d",x,y,result);
	
	return 0;
}

int gcd(int a,int b)
{
	int i,h;
	
	for(i = 1; i <= a && i <= b; i++)
	{
		if(a % i ==0 && b % i == 0)
		{
			h = i;
		}
	}
	return h;
}



