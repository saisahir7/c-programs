#include<stdio.h>
main()
{
	char ch;
	
	printf("Enter a character");
	ch=getchar();
	
	if(ch =='a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u'||ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U')
	{
		printf("it is a vowel");
	}
	else
	{
		printf("it is not a vowel");
	}
}

