#include<stdio.h>
main()
{
	int n,r,i,s=0;
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		scanf("%d",&r);
		s=s+r;
	}
	printf("%d",s/n);
}
