#include<stdio.h>
/*

*   	    *
*           *
  *       *
  *       *
    *   *
    *   *
      *
*/
main()
{
	int i,j;
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=8;j++)
		{
			if( 
				((j==1 || j==7) && (i==1 || i==2))
				||
				((j==2 || j==6) && (i==3 || i==4))
				||
				((j==3 || j==5) && (i==5 || i==6))
      			||
				(i==7 && j                                           ==4)				
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
