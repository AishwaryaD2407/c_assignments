#include<stdio.h>
int dec2bi(int num);

int main()
{
	int num;
	printf("Enter the decimal number:");
	scanf("%d",&num);
	printf("%d\n",dec2bi(num));
	return 0;
}

int dec2bi(int num)
{
	if(num==0)
		return 0;
	else
		return (num%2+10*dec2bi(num/2));
}
