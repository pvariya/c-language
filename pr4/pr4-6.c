#include<stdio.h>
/*
          5
        4 5 4
      3 4 5 4 3
    3 3 4 5 4 3 2
  1 2 3 4 5 4 3 2 1
    3 3 4 5 4 3 2
      3 4 5 4 3
        4 5 4
          5

*/
main()
{
	int i,j,s,p=4,k=1;
	for(i=5; i>=1; i--)
	{
		for(s=1; s<=p; s++)
		{
			printf("  ");
		}
		p--;
		for(j=i; j<=5; j++)
		{
			printf("%d ",j);
		}
		for(j=4; j>=i; j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	
	
	for(i=2; i<=5; i++)
	{
		for(s=1; s<=k; s++)
		{
			printf("  ");
		}
		k++;
		for(j=i; j<=5; j++)
		{
			printf("%d ",j);
		}
		for(j=4; j>=i; j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}


