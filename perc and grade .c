#include<stdio.h>
main()
{
	int m1,m2,m3,m4,m5,total;
	float per;
	
	printf("Enter marks");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	
	total=m1+m2+m3+m4+m5;
	per=(total*100)/500;
	
	if(per > 90)
	{
		printf("Grade A");
	}
	else
	     if(per > 80)
	     {
	     	printf("Grade B");
		 }
	else
	    if(per > 70)
	    {
	    	printf("Grade C");
		}
	else
	    if(per > 40)
	    {
	    	printf("Grade D");
		}
	else
	    if(per < 40)
	    {
	    	printf("Grade E");
		}	
}

