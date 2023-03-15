/* Write a C program to input and print array elements using pointer. */

#include<stdio.h>
#include<stdlib.h>

void print(int* ptr,int n);

int main()
{
	int *ptr,n,i;

	void (*fp)(int *, int)=&print;
	printf("Enter the number of elements:");
	scanf("%d",&n);

	ptr=(int*)malloc(n*sizeof(int));

	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}

	fp(ptr,n);

}

void print(int* ptr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}
}
