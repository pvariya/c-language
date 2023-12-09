#include<stdio.h>
/*
---Write a Program to find leap years between two 
    given numbers and store them in an array.
    And then print that
*/
main()
{		
		int n=1;
		int a[n],b[n],i;
		
		printf("\n   ---start---\n");
		for(i=0; i<n; i++)
		{
			printf("%d) Enter A Array :-",i+1);
			scanf("%d",&a[i]);
		}
		
		printf("\n   ---and---\n");
		for(i=0; i<n; i++)
		{
			printf("%d) Enter B Array :-",i+1);
			scanf("%d",&b[i]);
		}
		
		for(i=0; i<b[i]; i++)
		{
				if(a[i]%4==0)
				{
					printf("%d ",b[i]);		
				}	
		}
		
}
