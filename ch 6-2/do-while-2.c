#include<stdio.h>
main()
{
	int i=1,n;
	printf("enter any number :- ");
	scanf("%d",&n);
	do
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
		i++;
	}while(i<=n);
}
