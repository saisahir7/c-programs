#include<stdio.h>
main()
{
	int cp,sp,pft,loss;
	float pft_per,loss_per;
	
	printf("Enter cost price");
	scanf("%d",&cp);
	
	printf("Enter selling price");
	scanf("%d",&sp);
	
	if(sp > cp)
	{
		pft = sp - cp;
		pft_per = ((pft * 100) / cp);
		printf("\n%f",pft_per);
	}
}

