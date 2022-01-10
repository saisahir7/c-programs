#include<stdio.h>
float simple_int(float p,float t,float r)
{
	float si;
	si = (p * t * r) / 100;
	printf("%f",si);
}

int main(void)
{
	float p,t,r;
	
	printf("Enter p");
	scanf("%f",&p);
	
	printf("Enter t");
	scanf("%f",&t);
	
	printf("Enter r");
	scanf("%f",&r);
	
	simple_int(p,t,r);
}



