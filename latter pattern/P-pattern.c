#include<stdio.h>
/*

* * * 
*     *
*     *
* * *
*
*
*
*

*/
main()
{
	int i,j;
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=8;j++)
		{
			if( (j==2 && (i>=1 && i<=8))
							||
				(i==1 && (j==3 || j==4))
							||
			    (i==4 && (j==3 || j==4))
			  				||
			  	(j==5 && (i==2 || i==3))		
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
