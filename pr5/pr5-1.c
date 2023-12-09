#include<stdio.h>
main()
{
	int n;
	printf("ener array size :-");
	scanf("%d",&n);
	
	int a[n],i;
	for(i=0; i<n; i++)
	{
		printf("[%d] :- ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		if(a[i]<0)
		{
			printf("The largest element is :- %d",a[i]);
		}
	}
}
