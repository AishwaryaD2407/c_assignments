#include<stdio.h>

long int factorial(int num);

int main()
{
	unsigned int num;
	printf("Enter the number:");
	scanf("%d",&num);
	printf("Factorial of %d = %ld\n",num,factorial(num));
	return 0;
}

long int factorial(int num)
{
	if(num>=1)
		return (num*factorial(num-1));
	else
		return 1;
}
