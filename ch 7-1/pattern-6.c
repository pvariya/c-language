#include<stdio.h>
main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("0 ");
			}
			else if(j%2==1)
			{
				printf("1 ");
			}
		}
		printf("\n");
	}
}
