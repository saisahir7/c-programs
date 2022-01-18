#include<stdio.h>
void opr(int*,int*,int*,int*,int*);

int main()
{
	int a,b,c,d,e;
	
	a = 45;b = 30;
	
	opr(&a,&b,&c,&d,&e);
	
	printf("\nthe sum is %d",c);
	printf("\nthe differcence is %d",d);
	printf("\nthe product is %d",e);
	
	return 0;
}

void opr(int *p,int *q,int *r,int *s,int *t)
{
	printf("%d%d",*p,*q);
	
	*r = *p + *q;
	*s = *p - *q;
	*t = *p * *q;
}

