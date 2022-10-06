#include<stdio.h>
#define max_size 50

void display_arr(int *arr,int size)
{
	int i;
	for(i=0;i<=size;i++)
	{
		printf("%d  ",*(arr+i));
	}
}
int main()
{
	int arr1[max_size],arr2[max_size];
	int size,i;
	int *ptr1 = arr1;
	int *ptr2 = arr2;
	int *last_arr =arr1+9;

	printf("Enter the size of array:");
	scanf("%d",&size);

	printf("Enter the elements for first array: ");
	for(i=0;i<=size;i++)
	{
		scanf("%d",ptr1+i);
	}

	printf("\n 1st array elements before  :");
	display_arr(arr1,size);

	printf("\n 2nd array elements before  :");
	display_arr(arr2,size);

	while(ptr1 <= last_arr)
	{
		*ptr2 = *ptr1;
		ptr1++;
		ptr2++;
	}

	printf("\n 1st array elements after  :");
	display_arr(arr1,size);

	printf("\n 2nd array elements after  :\n");
	display_arr(arr2,size);

	return 0;
}
