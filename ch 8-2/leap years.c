#include<stdio.h>
main()
{
	int n1,n2;
	printf("enter frist year :- ");
	scanf("%d",&n1);
	printf("enter last year :- ");
	scanf("%d",&n2);
	
	int a[n1],b[n2],i;
	for(i=n1;i<=n2;i++)
	{
		if(n1%4==0)
		{
			printf("%d ",n1);
		}
		n1++;
	}
}
