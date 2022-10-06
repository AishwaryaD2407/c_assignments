#include<stdio.h>
void swap(int *a,int *b);
int main()
{
	int a,b;
	printf("Enter the values of a and b:");
	scanf("%d%d",&a,&b);
	printf("Before swap the values of a is:%d and b is:%d\n",a,b);
	swap(&a,&b);
	printf("After swap the values of a is:%d and b is:%d\n",a,b);
}

void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
