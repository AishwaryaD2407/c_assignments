/* Write a C program to add two numbers using pointer */

#include<stdio.h>

int add(int *ptr1, int *ptr2);

int main()
{
	int a,b, result;
	
	int (*fp)(int, int)=add;

	printf("Enter the 2 number for addition:");
	scanf("%d%d",&a,&b);

	result=fp(&a,&b);

	printf("Result = %d",result);
}

int add(int *ptr1, int *ptr2)
{
	int sum;
	sum=*ptr1 + *ptr2;
	return sum;
}
