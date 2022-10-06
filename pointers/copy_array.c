#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9},a[10],size,i;
	size=sizeof(arr)/sizeof(arr[0]);
	printf("Elements of original array: \n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}

	for(i=0;i<size;i++)
	{
		a[i]=arr[i];
	}
 	
	printf("\n Elements of copied array: ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}	
 	printf("\n");
}
