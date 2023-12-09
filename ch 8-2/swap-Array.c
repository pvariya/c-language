#include<stdio.h>
/*
--- swap 2 array 
*/
main()
{
		int n;
		printf("enter array size :- ");
		scanf("%d",&n);
		
		int a[n],b[n],i;
		
		printf("\n   ---Array A---\n");
		for(i=0; i<n; i++)
		{
			printf("%d) Enter A Array :-",i+1);
			scanf("%d",&a[i]);
		}
		
		printf("\n   ---Array B---\n");
		for(i=0; i<n; i++)
		{
			printf("%d) Enter B Array :-",i+1);
			scanf("%d",&b[i]);
		}
		
		for(i=0; i<n; i++)
		{
			a[i] = a[i] + b[i];
			b[i] = a[i] - b[i];
			a[i] = a[i] - b[i];
			
		//	a[i] = a[i] * b[i];
		//	b[i] = a[i] / b[i];
		//  a[i] = a[i] / b[i];
		
		//  c[i] = a[i];
		//  a[i] = b[i];
		//  b[i] = c[i];	
		}
		
		printf(" \n   ---swap---\n");
		printf("A - ");
		for(i=0; i<n; i++)
		{
			printf("%d ",a[i]);
		}
		printf("\n");
		printf("B - ");
		for(i=0; i<n; i++)
		{
			printf("%d ",b[i]);
		}
		
	
		
}
