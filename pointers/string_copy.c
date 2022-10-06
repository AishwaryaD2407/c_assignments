#include<stdio.h>
#define Max_size 100	
	
void copy_string(char *des,char *src);
int string_length(char *str);

int main()
{
	char str1[Max_size],str2[Max_size];
	int length;

	printf("Enter the string:");
	scanf("%s",str1);

        length = string_length(str1);
	printf("The length of string is:%d\n",length);

 	copy_string(str2,str1);
	printf("First string =%s\n",str1);
	printf("second string =%s\n",str2);

	return 0;
}

void copy_string(char *des,char *src)
{
	while(*src)
	{
		*des = *src;
		src++;
		des++;
	}
	*des = '\0';
}

int string_length(char *str)
{
	int cnt=0;
	while(*str != '\0')
	{
		cnt++;
		str++;
	}
	return cnt;
}
