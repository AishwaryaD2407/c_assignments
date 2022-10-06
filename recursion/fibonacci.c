#include<stdio.h>

void fib(int n);

int main()
{
	int n;
	printf("Enter the number of elements to be printed:");
	scanf("%d",&n);
	printf("Fibonacci series:");
	printf("%d %d ",0,1);
	fib(n-2);
	return 0;
}

void fib(int n)
{
	static int n1=0,n2=1,n3;
	if(n>0)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d ",n3);
		fib(n-1);
	}
}
