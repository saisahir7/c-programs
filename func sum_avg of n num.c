#include<stdio.h>
void sum_avg(int*,int*,int*);

int main()
{
	int n,sum = 0,avg = 0;
	
	scanf("%d",&n);
	
	sum_avg(&n,&sum,&avg);
	
	printf("the sum is %d",sum);
	printf("\nthe average is %d",avg);
	
	return 0;
}

void sum_avg(int *n,int *sum,int *avg)
{
	int i,x;
	
	for(i = 1; i <= *n; i++)
	{
		scanf("%d",&x);
		
		*sum = *sum + x;
	}
	*avg = *sum / (*n);
}

