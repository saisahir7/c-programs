#include<stdio.h>
int main()
{
	int age;
	printf(" enter the age");
	scanf("%d",&age);
	if(age>=18)
	{ 
	printf(" ELIGIBLE TO VOTE\n");
	}
	else
	{
		printf("not eligible to vote ");
	}
    return(0);
}
