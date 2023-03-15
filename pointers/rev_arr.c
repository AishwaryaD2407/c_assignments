/* Write a C program to reverse an array using pointers. */

#include<stdio.h>
#include<stdlib.h>

void reverse_arr(int *ptr,int n);

int main()
{
	int arr[20],n,i;

	void(*fp)(int *, int)=&reverse_arr;

	printf("Enter the number of elements:");
	scanf("%d",&n);

	printf("Enter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	fp(&arr,n);

	for(i=0;i<n;i++)
		printf("%d ",arr[i]);

}

void reverse_arr(int *ptr,int n)
{
	int temp=0,i,j;

	for(i=0,j=(n-1);i<n/2;i++,j--)
	{
		temp=*(ptr+i);
		*(ptr+i)=*(ptr+j);
		*(ptr+j)=temp;
	}
}
