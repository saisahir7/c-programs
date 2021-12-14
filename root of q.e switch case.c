#include<stdio.h>
main()
{
	int a,b,c;
	float d,root1,root2;
	
	scanf("%d%d%d",&a,&b,&c);
	
	d = ((b*b)-(4*a*c));
	root1 = ((-b+sqrt(d))/(2*a));
	root2 = ((-b-sqrt(d))/(2*a));
	
	switch(d>0)
	{
		case 1 : printf("roots are real and distinct %f %f",root1,root2);
		         break;
		case 0 : switch(d<0)
		          {
		          	case 1 : printf("roots are real and imaginary %f %f",root1,root2);
		          	         break;
		            case 0 : printf("roots are real and equal %f %f",root1,root2);
				  }
	  } 
}

