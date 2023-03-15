/* Write a C program to swap two arrays using pointers. */

#include<stdio.h>
#include<stdlib.h>

void swap_arr(int *ptr,int *ptr1, int n);

int main()
{
	int arr[20],arr1[20],n,i;

	void(*fp)(int *, int* ,int)=&swap_arr;

	printf("Enter the number of elements:");
	scanf("%d",&n);

	printf("Enter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	printf("Enter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&arr1[i]);

	fp(&arr,&arr1,n);

	for(i=0;i<n;i++)
		printf("%d ",arr[i]);

	printf("\n");
	
	for(i=0;i<n;i++)
		printf("%d ",arr1[i]);
}

void swap_arr(int *ptr,int *ptr1,int n)
{
	int temp=0,i;

	for(i=0;i<n;i++)
	{
		temp=*(ptr+i);
		*(ptr+i)=*(ptr1+i);
		*(ptr1+i)=temp;
	}
}

