/* Write a C program to copy one array to another using pointers. */

#include<stdio.h>
#include<stdlib.h>

void copy_arr(int *arr,int *arr1,int n);

int main()
{
	int n, i, arr[20],arr1[20];

	void(*fp)(int *, int *, int)=&copy_arr;

	printf("Enter the number of elements: ");
	scanf("%d",&n);

	printf("Enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	copy_arr(&arr,&arr1,n);

	for(i=0;i<n;i++)
	{
		printf("%d",arr1[i]);
	}
}

void copy_arr(int *arr,int *arr1,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		arr1[i]=arr[i];
	}
}
