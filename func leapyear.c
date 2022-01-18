#include<stdio.h>
int leapyear(int n);

int main(void)
{
	int year;
	
	printf("Enter the year");
	scanf("%d",&year);
}

int leapyear(int y)
{
	if(y % 4 == 0)
	{
		printf("%d is a leap year",y);
	}
	else
	{
		printf("%d is not a leap year",y);
	}
}

