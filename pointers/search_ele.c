/* Write a C program to search an element in array using pointers. */

#include<stdio.h>
#include<stdlib.h>

void Search_ele(int *ptr,int n);

int main()
{
	int arr[20],n,i;

	void(*fp)(int *, int)=&Search_ele;

	printf("Enter the number of elements:");
	scanf("%d",&n);

	printf("Enter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);

	fp(&arr,n);

}

void Search_ele(int *ptr,int n)
{
	int i,num,cnt=0;
	printf("Enter the number to search: ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(*(ptr+i)==num)
			cnt++;
	}

	printf("There is %d times number %d is there in an array",cnt,num);
}


