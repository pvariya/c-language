#include<stdio.h>
//  --- Write a Program to find the length of a 1D array.
main()
{
    int n;
	printf("Enter Arrya Size :- ");
	scanf("%d",&n);
	
	int a[n],i;
	for(i=0; i<n; i++)
	{
		printf("%d) Enter Eliments :-",i+1);
		scanf("%d",&a[i]);
	}
	printf("--------------------------\n");	
	printf(" Array Length :- %d\n",n);
	printf("--------------------------");
}
