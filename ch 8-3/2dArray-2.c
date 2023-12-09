#include<stdio.h>
/*
    Write a Program to perform the addition operation of two 
   2D arrays & store it in another array.
   Keep in mind that both array sizes must be the same.
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
			printf("enter Array B alimnet [%d][%d]:- ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			d[i][j]=a[i][j]+b[i][j];
		}
	}		
	
	printf("\n     ----2 Array sum----\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
}
