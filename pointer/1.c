#include<stdio.h>
main()
{
	int n;
	printf("enter array size :- ");
	scanf("%d",&n);
	int i,a[n],b[n],c[n];
	int *ptr,*ptr2,*ptr3;
	
	ptr = &a[n];
	ptr2 = &b[n];
	ptr3 = &c[n];
	
	printf("-------Array A input---------\n");
	for(i=0 ;i<n; i++)
	{
		printf("[%d] :- ",i);
		scanf("%d",ptr + i);
	}
	printf("-------Array B input---------\n");
	for(i=0 ;i<n; i++)
	{
		printf("[%d] :- ",i);
		scanf("%d",ptr2 + i);
	}
	for(i=0 ;i<n; i++)
	{
	//	c[i]=a[i];
		*(ptr3= ptr);
	}

	for(i=0 ;i<n+n; i++)
	{
	//  c[i+n]=b[i];
		*((ptr3 + n ) = ptr2);
	}
	for(i=0; i<n+n; i++)
	{
		printf("%d ",*ptr3);
			
	}
}
