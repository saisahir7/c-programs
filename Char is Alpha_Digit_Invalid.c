#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter character");
	scanf("%c",&ch);
	
	if(isalpha(ch))
	{
		printf("%c is alphabet",ch);
	}
	else
	   if(isdigit(ch))
	   {
	   	printf("%c is digit",ch);
	   }
	   else
	   {
	   	printf("Invalid");
	   }
}

