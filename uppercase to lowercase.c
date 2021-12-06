#include<stdio.h>
main()
{
	char ch;
	
	printf("Enter a character");
	ch=getchar();
	
	if(isupper(ch))
	
	  ch = ch + 32;
	  printf("converted character is %c",ch);
}

	

