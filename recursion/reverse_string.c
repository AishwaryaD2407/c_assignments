#include<stdio.h>
#include<string.h>
void reverse(char *str,int k);
void swap(char *a,char *b);

int main()
{
	char s1[30];
	printf("Enter the string to be reverse:");
	scanf("%s",s1);
	reverse(s1,0);
	printf("Reverse string is: %s\n",s1);
	return 0;
}

void reverse(char *str,int k)
{
	static int i=0;
	if(*(str+k) == '\0')
	{
		return ;
	}
	reverse(str,k+1);
	if(i<=k)
	{
		swap(&str[i++],&str[k]);
	}
}

void swap(char *a, char *b)
{
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

