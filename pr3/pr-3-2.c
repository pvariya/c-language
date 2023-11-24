#include<stdio.h>
main()
{
	int n,count=0;
	printf("enter any number :- ");
	scanf("%d",&n);
	
	do
	{
		n /= 10;
		count++;
	}while(n != 0);
	printf(" number of digit :- %d",count);
}
