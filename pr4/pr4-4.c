#include<stdio.h>
/*
   1 0 1 0 1
     1 0 1 0
       1 0 1
         1 0
           1
*/
main()
{
	int i,j,s,space=0;
	for(i=1; i<=5; i++)
	{
		for(s=1; s<=space; s++)
		{
			printf("  ");
		}
		space++;
		for(j=5; j>=i; j--)
		{
			printf("%d ",j%2);
		}
		printf("\n");
	}
}