#include<stdio.h>

void main()
{
int a;
char t,s[100];
printf("\nenter the string\n");
 scanf("%s",s);
char *p,*q;
p=s;
q=s+1;
printf("%c %c ",*p,*q);
do
{
  t=*p;
  *p=*q;
  *q=t;
   p=p+2;
   q=q+2;
 }while(q!=0);
//printf("%c %c ",*p,*q);

}
