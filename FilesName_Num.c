#include <stdio.h>
int main()
{
   int num;
   char name[20];
   
   FILE *fp;
   fp = fopen("program.txt","w");
   
   printf("Enter num: ");
   scanf("%d",&num);
   
   printf("Enter name");
   scanf("%s",name);
   
   fprintf(fp,"%d\n%s",num,name);
   fclose(fp);
}
