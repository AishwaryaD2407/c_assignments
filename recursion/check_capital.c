#include<stdio.h>
#include<string.h>

char check_cap(char *str);

int main()
{

	char word[60];
	char capital;
	printf("Enter the word:");
	scanf("%s",word);
	capital = check_cap(word);
	if(capital == 0)
		printf("There is no capital letters.\n");
	else
		printf("The first capital letter is : %c\n",capital);
}

char check_cap(char *str)
{
	static int i=0;
	if(i<strlen(str))
	{
		if(str[i] >= 'A' && str[i] <='Z')
		{
			return str[i];
		}
		else
			i=i+1;
		return check_cap(str);
	}
	else 
		return 0;
}
