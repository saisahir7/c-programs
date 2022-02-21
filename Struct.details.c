#include<stdio.h>

struct student
{
	int rno;
	char name[20];
	float cgpa;
}

main()
{
	struct student s;
	
	scanf("%d%s%f",&s.rno,&s.name,&s.cgpa);
	printf("stud details\n");
	printf("rno is %d\n",s.rno);
	printf("name is %s\n",s.name);
	printf("cgpa is %f",s.cgpa);
}

