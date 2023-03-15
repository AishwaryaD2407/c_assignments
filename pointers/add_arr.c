/* Write a C program to add two matrix using pointers. */

#include<stdio.h>
#include<stdlib.h>

void add(int *ptr1, int *ptr2,int row, int col);

int main()
{

	int *arr1,*arr2,*arr3,i, j, row, col;
	printf("Enter the row and col:");
	scanf("%d%d",&row,&col);

	arr1=(int *)malloc(row*col*sizeof(int));
	arr2=(int *)malloc(row*col*sizeof(int));
	arr3=(int *)malloc(row*col*sizeof(int));

	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			*(arr1+i*col+j)=2;

	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			*(arr2+i*col+j)=3;

	add(arr1,arr2,row,col);
	/*
	   for(i=0;i<row;i++,printf("\n"))
	   for(j=0;j<col;j++)
	   printf("%d ",*(arr1+i*col+j));
	   printf("\n");

	   for(i=0;i<row;i++,printf("\n"))
	   for(j=0;j<col;j++)
	   printf("%d ",*(arr2+i*col+j));
	 */	printf("\n");
}

void add(int *ptr1, int *ptr2,int row, int col)
{

	int i,j,*arr;
	arr=(int *)malloc(row*col*sizeof(int));

	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			*(arr+i*col+j)=*(ptr1+i*col+j)+ *(ptr2+i*col+j);

	for(i=0;i<row;i++,printf("\n"))
		for(j=0;j<col;j++)
			printf("%d ",*(arr+i*col+j));
}
