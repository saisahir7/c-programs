#include<stdio.h>
void swap(int*,int*);

int main(void)
{
	int x,y;
	
	x = 99;
	y = 55;
	
	printf("the values before swapping %d %d",x,y);
	swap(&x,&y);
	printf("\nthe values after swapping %d %d",x,y);
	
	return 0;
}

void swap(int*a,int*b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}

