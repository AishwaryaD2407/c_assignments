/* Write a C program to swap two numbers using pointers. */


#include<stdio.h>

void swap(int *ptr1, int *ptr2);

int main()
{
	int data1,data2;
	
	void (*fp)(int*, int*)=swap;

	printf("Enter the value of 2 number:");
	scanf("%d%d",&data1,&data2);

	fp(&data1,&data2);

	printf("Numbers after swapping: %d  %d",data1,data2);

}

void swap(int *ptr1, int *ptr2)
{
	int temp;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}
