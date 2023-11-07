#include<stdio.h>
#include<conio.h>
#define P printf

main()
{
	int a,b,c,d;
	clrscr();
	P("enter a number :- ");
	scanf("%d",&a);
	P("enter b number :- ");
	scanf("%d",&b);
	P("enter c number :- ");
	scanf("%d",&c);
	P("enter d number :- ");
	scanf("%d",&d);
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				P("a is big...");
			}
			else
			{
				P("d is big...");
			}
		}
		else
		{
			if(c>d)
			{
				P("c id big...");
			}
			else
			{
				P("d is big...");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				P("b is big...");
			}
			else
			{
				P("d is big...");
			}
		}
		else
		{
			if(c>d)
			{
				P("c is big...");
			}
			else
			{
				P("d is big...");
			}
		}
	}
	getch();
}

