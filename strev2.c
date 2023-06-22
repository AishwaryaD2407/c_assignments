#include<stdio.h>
#include<string.h>
void main()
{
 char a[100];
int l,i;
   
printf("\n enter the string\n");
 scanf("%s",a);
  printf("\n");
l=strlen(a);
 for(i=l;i>=0;i--)
    printf("%c",a[i]);

}
