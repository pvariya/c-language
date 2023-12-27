#include<stdio.h>
/*
 Write a Program to swap two variables using Pointers.
*/
main()
{
	int a,b;
	printf("enter value of X :- ");
	scanf("%d",&a);
	printf("enter value of Y :- ");
	scanf("%d",&b);
	
	int *x,*y;
	x = &a;
	y = &b;
	
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
	
	printf("X :- %d\n", *x);
	printf("Y :- %d",   *y);
}
