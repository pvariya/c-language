#include<stdio.h>
/*
         *
       * * *
     * * * * *
   * * * * * * *
 * * * * * * * * * 
   * * * * * * *
     * * * * *
        * * *
          *

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
			printf("* ");
		}
		for(j=4; j>=i; j--)
		{
			printf("* ");
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
			printf("* ");
		}
		for(j=4; j>=i; j--)
		{
			printf("* ");
		}
		printf("\n");
	}
}

