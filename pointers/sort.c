#include<stdio.h>
#include<string.h>

void display_array(int *array,int size);
void swap(int *a,int *b);

int main()
{
	int arr[30];
	int *array=arr;
	int choice,i,j,size;

	printf("Enter the size of the array:");
	scanf("%d",&size);

	printf("Enter the elements of array:");
	for(i=0;i<size;i++)
	{
	//	printf("Enter the elements %d :",(i+1));
		scanf("%d",&arr[i]);
	}

	printf("Initial array:");
	display_array(array, size);

	printf("Enter the choice 1 or 2 :");
	scanf("%d",&choice);

	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(choice == 1)
			{
				if(*(array+j) < *(array+i))
				{
					swap((array+i),(array+j));
				}
			}
			else
			{
				if(*(array+j) > *(array+i))
				{
					swap((array+i),(array+j));
				}
			}
		}
	}
	printf("Final array: ");
	display_array(array,size);
	return 0;

}

void display_array(int *array,int size)
{
	int i;
	printf("[");
	for(i=0;i<size;i++)
	{
		printf("%d ",*(array+i));
	}
	printf("]\n");
}


void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
