#include<stdio.h>
#include<conio.h>
#define P printf

main()
{
	int a,b,c;
	clrscr();
	P("enter a number :- ");
	scanf("%d",&a);
	P("enter b number :- ");
	scanf("%d",&b);
	P("enter c number :- ");
	scanf("%d",&c);
	if(a<b)
	{
		if(a<c)
		{
			P("a is small");
		}
		else
		{
			P("c is small");
		}
	}
	else
	{
		if(b<c)
		{
			P("b is small");
		}
		else
		{
			P("c is small");
		}
	}
	getch();
}

