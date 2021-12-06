// write a c program to display the students grade with conditions 1. marks is >= 80 and <= 100. display grade A, marks is >= 70 and <80 display B. marks is >= 60 and <70. display C. marks is >=50 and < 60 display D
#include<stdio.h>
int main()
{
	int marks;
	printf("enter the student marks");
	scanf("%d",&marks);
	if(marks>=80 && marks<=100)
	{ 
	printf(" grade is A");
	}
    else if(marks>=70 && marks<80)
    {
    	printf(" grade is B");
	}
	else if(marks>=60 && marks<70)
	{ 
	printf(" grade is C");
	}
    else if(marks>=50 && marks<60)
    { 
    printf(" grade is D");
}
else{ 
printf("student is failed");
}
return(0);
}
