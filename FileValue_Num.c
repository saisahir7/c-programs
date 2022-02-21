#include <stdio.h>
int main()
{
   int num;
   
   FILE *fp;
   fp = fopen("program2.txt","r");
   fscanf(fp,"%d", &num);
   
   printf("Value of n=%d", num);
   fclose(fp); 
}
