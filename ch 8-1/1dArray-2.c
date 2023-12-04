#include<stdio.h>
//  --- Write a Program to find the average of a 1D array.
main()
{
    int n;
    float avg = 0;
	printf("Enter Arrya Size :- ");
	scanf("%d",&n);
	
	int a[n],i;
	for(i=0; i<n; i++)
	{
		printf("%d) Enter Eliments :-",i+1);
		scanf("%d",&a[i]);
		avg +=a[i];
	}
	
	avg = avg/n;
	printf("--------------------------\n");	
	printf("Average of a 1D Array :- %.2f\n",avg);
	printf("--------------------------");
}
