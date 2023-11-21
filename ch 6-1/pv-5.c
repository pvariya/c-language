#include<stdio.h>
main()
{
	int a,b;
	printf("Enter any number :- ");
	scanf("%d",&a);
	printf("Enter any number :- ");
	scanf("%d",&b);
	while(a<=b)
	{
	
		if(a%4==0)
		{
			printf("%d ",a);
		}
		a++;
	}
}
