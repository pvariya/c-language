#include<stdio.h>
main()
{
	int n1,n2;
	printf("entr array size :- ");
	scanf("%d",&n1);
	
	int a[n1],i;
	printf("  \n ---Array A---\n");
	for(i=0; i<n1; i++)
	{
		printf("enter array A alimnets :- ");
		scanf("%d",&a[i]);
	}
	int b[n2],c[i];
	printf("entr array size :- ");
	scanf("%d",&n2);

	printf("  \n ---Array B---\n");
	for(i=0; i<n2; i++)
	{
		printf("enter array B alimnets :- ");
		scanf("%d",&b[i]);
	}
	
	for(i=0; i<n1; i++)
	{
		c[i]=a[i];
	}
	for(i=0; i<n2; i++)
	{
		c[i+n1]=b[i];
	}
	printf("\n  ---merge---\n");
	for(i=0; i<n1+n2; i++)
	{
		printf("%d ",c[i]);
	}
}
