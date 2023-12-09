#include<stdio.h>
/*
Write a Program to find the average of a given 2D array.
*/
main()
{
	int r,c;
	printf("enter row :-");
	scanf("%d",&r);
	printf("enter column :-");
	scanf("%d",&c);
	
	int a[r][c],i,j;
	int sum,n;
	printf("   ---Array aliment---\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter array aliment :-");
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum += a[i][j];
		}
	}
	
	n=r*c;
	sum=sum/n;
	printf("Average %d ",sum);
}
