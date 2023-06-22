#include<stdio.h>
void main()
{
	int a[50],i,j,k,n,p;
	printf("\n enter the limit\n");
	scanf("%d",&n);
	printf("\n enter array elements\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		p=a[i];
		if(a[i]=='c')
			continue;
		for(j=i+1,k=0;j<n;j++)
		{
			if(a[i]==a[j])
			{    
				++k;
				a[j]='c';
			}
		}
		printf("\n %d  frequency = %d",p,k+1);
	}
}
