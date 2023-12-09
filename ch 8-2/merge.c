#include<stdio.h>
main()
{
	int n;
	printf("entr array size :- ");
	scanf("%d",&n);
	
	int a[n],b[n],c[n],i;
	printf("  \n ---Array A---\n");
	for(i=0; i<n; i++)
	{
		printf("enter array A alimnets :- ");
		scanf("%d",&a[i]);
	}
	printf("  \n ---Array B---\n");
	for(i=0; i<n; i++)
	{
		printf("enter array B alimnets :- ");
		scanf("%d",&b[i]);
	}
	
	for(i=0; i<n; i++)
	{
		c[i]=a[i];
	}
	for(i=0; i<n; i++)
	{
		c[i+n]=b[i];
	}
	printf("\n  ---merge---\n");
	for(i=0; i<n+n; i++)
	{
		printf("%d ",c[i]);
	}
}
