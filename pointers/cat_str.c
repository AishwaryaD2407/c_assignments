/* Write a C program to concatenate two strings using pointers. */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void cat_str(char *ptr1,char *ptr2,int l);

int main()
{
        char str1[20],str2[20];
	int len;

        printf("Enter the string:");
        fgets(str1,20,stdin);
	fgets(str2,20,stdin);
	len=strlen(str1);
        
	cat_str(str1,str2,(len-1));

	printf("%s",str1);
}

void cat_str(char *ptr1,char *ptr2, int l)
{
        int i;
        for(i=0;ptr2[i];i++)
                ptr1[i+l]=ptr2[i];

}

