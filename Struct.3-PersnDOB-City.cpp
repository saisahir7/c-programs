#include<stdio.h>
struct date
{
	int dd,mm,yy;
};
struct person
{
	char name[20];
	struct date dob;
	char city[20];
};
int main()
{
	struct person p[3];
	
	int i;
	for(i = 0; i < 3; i++)
	{
		scanf("%s%d%d%d%s",&p[i].name,&p[i].dob.dd,&p[i].dob.mm,&p[i].dob.yy,&p[i].city);
	    printf("%s %d/%d/%d %s",p[i].name,p[i].dob.dd,p[i].dob.mm,p[i].dob.yy,p[i].city);
	}
}

