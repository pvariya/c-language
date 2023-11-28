#include<stdio.h>
/*
5 4 3 2 1
  5 4 3 2 
    3 2 1 
      2 1 
        1
*/
main()
{
	int i,s,j;
	for(i=1;i<=5;i++)
	{
		for(s=1;s<=i-1;s++)
		{
			printf("  ");
		}
		for(j=5;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
