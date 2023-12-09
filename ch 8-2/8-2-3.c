#include<stdio.h>
/*
--- Write a Program to find square of each element from the given array. 
*/
main()
{
		int n;
		printf("enter array size :- ");
		scanf("%d",&n);
		
		int a[n],square[n],i;
		
		printf("\n   ---Array A---\n");
		for(i=0; i<n; i++)
		{
			printf("%d) Enter A Array :-",i+1);
			scanf("%d",&a[i]);
		}
		
		
		for(i=0; i<n; i++)
		{
			square[i] = a[i] * a[i];
		}
		
		printf(" \n   ---square---\n");
		printf("A - ");
		for(i=0; i<n; i++)
		{
			printf("%d ",square[i]);
		}
		
}
