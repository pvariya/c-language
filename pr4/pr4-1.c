#include<stdio.h>
/*
11
22 33
44 55 66
77 88 99 110
121 132 143 154 165
*/
main()
{
	int i,j,s=11;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",s);
			s+=11;
		}
		printf("\n");
	}
}
