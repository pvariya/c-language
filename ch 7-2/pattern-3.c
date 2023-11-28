#include<stdio.h>
/*
        5
      4 4
    3 3 3
  2 2 2 2
1 1 1 1 1
*/
main()
{
	int i,j,s;
	for(i=5;i>=1;i--)
	{
		for(s=1;s<=i-1;s++)
		{
			printf("  ");
		}	
		for(j=i;j<=5;j++)
		{
			printf("%d ",);
		}
		printf("\n");
	}
}
