#include<stdio.h>
struct date
{
	int dd,mm,yy;
};
struct person
{
	char name[2];
	struct date dob;
	char city[20];
};
int main()
{
	struct person p;
	
	scanf("%s%d%d%d%s",&p.name,&p.dob.dd,&p.dob.mm,&p.dob.yy,&p.city);
	printf("\n%s %d/%d/%d %s",p.name,p.dob.dd,p.dob.mm,p.dob.yy,p.city);
}

