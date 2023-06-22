#include<stdio.h>
void fun(char *p)
{
  static int i;

    if(p[i]!='\0')
   {
       fun(p+1);    
   printf(" %c", *p);
    
   } 
}
void main()
{
  char a[50];
 printf("\nenter the string\n");
 scanf("%s",a);
  fun(a);
}
