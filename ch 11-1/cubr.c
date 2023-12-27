#include<stdio.h>
main()
{
	int cube;
	int *ptr;
	
	ptr = &cube;
	printf("enter any number :- ");
	scanf("%d",&cube);
	
	*ptr * *ptr * *ptr;
	printf("%d ",*ptr);
}
