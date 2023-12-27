#include<stdio.h>
main()
{
	int n;
	printf("enter array size :- ");
	scanf("%d",&n);

	int *ptr;
	int a[n],i,square;

//	ptr = &a[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter [%d] :- ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		ptr[i] = a[i];
	}
	for(i=0; i<n; i++)
	{
		square = (ptr[i] * ptr[i]);
		printf("%d ",square);
	}
}
