#include<stdio.h>
/*
   Write a Program to print and find the sum of all 
   boundary elements from a given 5x5 2D array.
*/
main()
{
	int r,c;
	printf("enter row size :- ");
	scanf("%d",&r);
	printf("enter column size :- ");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],d[r][c];
	int i,j;
	
	printf("\n     ---A Array----\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("enter Array A alimnet [%d][%d]:- ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n     ---B Array----\n");

	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			(i==0||j==0||i==r-1||j==c-1)
										?printf("%d ",a[i][j])
										:printf("  ");
		}
		printf("\n");
	}
}
