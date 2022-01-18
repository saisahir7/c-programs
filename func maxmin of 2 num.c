#include<stdio.h>
void max_min(int*,int*,int*,int*);

int main(void)
{
	int x,y,max,min;
	
	scanf("%d",&x);
	scanf("%d",&y);
	
	max_min(&x,&y,&max,&min);
	
	printf("the max is %d and min is %d",max,min);
	
	return 0;
}

void max_min(int *a,int *b,int *max,int *min)
{
	if(*a > *b)
	{
		*max = *a;
		*min = *b;
	}
	else
	{
		*max = *b;
		*min = *a;
	}
}

