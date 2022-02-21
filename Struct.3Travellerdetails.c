#include<stdio.h>
struct traveller
{
	char name[20];
	int age,trno,seatno,coachno;
};

main()
{
	struct traveller t[3];
	
	int i;
	for(i = 0; i < 3; i++)
	{
		scanf("%s%d%d%d%d",&t[i].name,&t[i].age,&t[i].trno,&t[i].seatno,&t[i].coachno);
		printf("%s %d %d %d %d",t[i].name,t[i].age,t[i].trno,t[i].seatno,t[i].coachno);
	}
}



