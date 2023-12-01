#include<stdio.h>
/*
11
12 13
14 15 16
17 18 19 20
21 22 23 24 25
*/
main()
{
	int i,j,s=11;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",s);
			s++;
		}
		printf("\n");
	}
}
