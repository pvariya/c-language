#include<stdio.h>
/*
 Write a Program to find the sum of diagonal elements from a given 2D array.
*/
main()
{
	int r,c;
	printf("enter row size :- ");
	scanf("%d",&r);
	printf("enter column size :- ");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],d[r][c];
	int sum=0,i,j;
	
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
			if(i==j)
			{
					printf("%d ",a[i][j]);
					sum+=a[i][j];
			}
			else{
				printf("  ");
			}
					
		}
		
		printf("\n");
	}
	printf("%d",sum);
	
}

