#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	clrscr();
	printf("enter frist number :- ");
	scanf("%d",&a);
	printf("enter second number :- ");
	scanf("%d",&b);

	if(a<b)
	{
		printf("the minimum value is %d...",a);
	}
	else
	{
		printf("the minimum value is %d...",b);
	}
	getch();
}

