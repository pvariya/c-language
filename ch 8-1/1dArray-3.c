#include<stdio.h>
/*  --- Write a Program to perform the addition operation
         of two 1D arrays & store it in another array. 
		 Keep in mind that both array sizes must be the same.

*/      
main()
{
    int n;
    
	printf("Enter Arrya Size :- ");
	scanf("%d",&n);
	
	int a[n],b[n],i,c[n];
	for(i=0; i<n; i++)
	{
		printf("%d) Enter A Eliments :-",i+1);
		scanf("%d",&a[i]);	
	}
	
	printf("--------------------------\n");	

	for(i=0; i<n; i++)
	{
		printf("%d) Enter B Eliments :-",i+1);
		scanf("%d",&b[i]);	
	}
			
	printf("--------------------------\n");	
	for(i=0;i<n;i++)
	{
		
	c[i]=a[i]+b[i];
	printf("%d) array c is :- %d\n",i+1,c[i]);
	}
}
