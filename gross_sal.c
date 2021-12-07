#include<stdio.h>
main()
{
	float basic,hra,da,gross_sal;
	
	printf("Enter basic salary");
	scanf("%f",&basic);
	
	if(basic <= 10000)
	{
		hra = (20*basic)/100;
		da = (80*basic)/100;
		gross_sal = basic + hra + da;
		printf(" gross salary is %f",gross_sal);
	}
	else
	    if(basic <= 20000)
	    {
	    	hra = (25*basic)/100;
	    	da = (90*basic)/100;
	    	gross_sal = basic + hra + da;
	    	printf("gross salary is %f",gross_sal);
		}
	else
	    if(basic > 20000)
	    {
	    	hra = (30*basic)/100;
	    	da = (95*basic)/100;
	    	gross_sal = basic + hra + da;
	    	printf("gross salary is %f",gross_sal);
		}
}

