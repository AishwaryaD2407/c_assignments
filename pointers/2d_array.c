/* Write a C program to access two dimensional array using pointers. */

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *arr,i, j, row, col;
	printf("Enter the row and col:");
	scanf("%d%d",&row,&col);

	arr=(int *)malloc(row*col*sizeof(int));

	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			*(arr+i*col+j)=i+j;

	for(i=0;i<row;i++,printf("\n"))
		for(j=0;j<col;j++)
			printf("%d ",*(arr+i*col+j));

	free(arr);

}
