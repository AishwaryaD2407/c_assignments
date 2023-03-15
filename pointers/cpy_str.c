/* Write a C program to copy one string to another using pointers. */

#include<stdio.h>
#include<stdlib.h>

void copy_str(char *ptr1,char *ptr2);

int main()
{
	char str1[20],str2[20],i;

	printf("Enter the string:");
	fgets(str1,20,stdin);

	copy_str(str1,str2);

printf("%s",str2);
}

void copy_str(char *ptr1,char *ptr2)
{
	int i;
	for(i=0;*(ptr1+i)!='\0';i++)
		*(ptr2+i)=*(ptr1+i);

}
