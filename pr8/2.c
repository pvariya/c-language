#include<stdio.h>

void cube(int r,int c,int *ptr[r][c])
{
	int i,j,d[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j] = (*ptr[i][j]) * (*ptr[i][j]) * (*ptr[i][j]);
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Cube Of This Is:%d\n",d[i][j]);
		}
	}
}

void main()
{
	int r,c;
	printf("Enter Row :");
	scanf("%d",&r);
	printf("Enter Column :");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter A[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	int *ptr[r][c];

	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			ptr[i][j] = &a[i][j];
		}
	}
	
	cube(r,c,&ptr);
}
