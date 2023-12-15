#include<stdio.h>


void cube(int n)
{

	printf("===cube===\n");
	printf("   %d\n",n*n*n);
	printf("==========\n");
}

void divisible(int n)
{
	printf("----------------------------------------------\n");
	if(n%3==0 && n%5==0)
	{
		printf("The given number is divisible by both 3 & 5");
	}
	else
	{
		printf("The given number is not divisible by both 3 & 5.");
	}
}

main()
{
	int n;
	
	printf("enter any number :- ");
	scanf("%d",&n);
	
	cube(n);
	divisible(n);
}
