#include<stdio.h>
main()
{
	int r,c;
	printf("ener row size :-");
	scanf("%d",&r);
	printf("ener colunm size :-");
	scanf("%d",&c);	
	
	int a[r][c],i,purv=0,j;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("[%d][%d] :- ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
		printf("%d ",a[j][i]);
		}
		printf("\n");
	}
}
