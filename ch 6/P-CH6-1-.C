#include<stdio.h>
#include<conio.h>
main()
{

	int n;
	clrscr();
	printf("enter any number :- ");
	scanf("%d",&n);
	if(n > 0)
	{
		printf("this number is Positive...");
	}
	else if(n == 0)
	{
		printf("this number is Neutral...");
	}
	else
	{
		printf("this number is Negative...");
	}
	getch();
}
