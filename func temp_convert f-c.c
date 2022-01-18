#include<stdio.h>
float centig_temp(float x);

int main(void)
{
	float f;
	
	printf("Enter temperature");
	scanf("%f",&f);
	
	float temp = centig_temp(f);
	printf("Temperature in centig_temp is %f",temp);
	
	return 0;
}

float centig_temp(float x)
{
	float t;
	
	t = (5 * (x - 32)) / 9;
	
	return t;
}

