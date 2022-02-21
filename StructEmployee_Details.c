#include<stdio.h>
struct employee
{
	int eno,ejyr;
	char ename[100];
	float esal;
};

int main()
{
	int n,i;
	
	struct employee emp[n];
	
	printf("\nEnter employee details");
	scanf("%d",&n);
	
	for(i = 0; i < n; i++)
	{
	   printf("\nEnter name");
	   scanf("%s",emp[i].ename);
	
	   printf("\nEnter no");
	   scanf("%d",&emp[i].eno);
	   
	   printf("\nEnter year");
	   scanf("%d",&emp[i].ejyr);
	
	   printf("\nEnter salary");
	   scanf("%f",&emp[i].esal);
	   
	   printf("\n");
	}
	
	for(i = 0; i < n; i++)
	{
		printf("%s \n",emp[i].ename);
		printf("%d \n",emp[i].eno);
		printf("%d \n",emp[i].ejyr);
		printf("%f \n",emp[i].esal);
		
		printf("\n");
	}	
}

