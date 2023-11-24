#include<stdio.h>
main()
{
	int i,n,count=0,j;
	printf("entee any number :- ");
	scanf("%d",&n);
	
	printf("your prime number 1 % %d is ",n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(i%j == 0)
			{
				count++;
			}
		}
		if(count <= 2)
		{
			printf("%d ",i);
		}
		count=0;
	}
}
