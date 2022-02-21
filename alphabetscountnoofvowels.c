#include<stdio.h>
main()
{
	int n,i,v=0;
	char c;
	scanf("%d",&n);
	for(i=1;i<+n;i++)
	{
		scanf("%c",&c);
	}
	if(c =='a'||c =='e'||c =='i'||c =='o'||c =='u')
	{
		v=v+1;
	}
	printf("no of vowels are %d",v);
}
