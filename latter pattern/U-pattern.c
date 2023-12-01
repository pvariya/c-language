#include<stdio.h>
/*

*       *
*       *
*       * 
*       *
*       *
*       *
  * * * 

*/
main()
{
	int i,j;
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=8;j++)
		{
			if( (j==2 && (i>=1 && i<=7))
							||
				(j==6 && (i>=1 && i<=7))
							||
			    (i==8 && (j==3 || j==4 || j==5))	
			)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
