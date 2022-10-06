#include<stdio.h>
#include<string.h>

void check_palindrome(char s1[],int index);

int main()
{
	char str[30];
	printf("Enter the word to check:");
	scanf("%s",str);
	check_palindrome(str,0);
	return 0;
}

void check_palindrome(char s1[],int index)
{
	int size;
	size = strlen(s1)-(index+1);
	if(s1[index] == s1[size])
	{
		if(index+1 == size || index == size)
		{
			printf("The entered word is a palindrome.\n");
			return ;
		}
		check_palindrome(s1,index+1);
	}
	else
	{
		printf("The entered word is not a palindrome.\n");
	}
}
