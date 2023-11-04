#include<stdio.h>
#include<conio.h>

main()
{

	int a,b,c;
   clrscr();
	printf("enter 1 side :- ");
	scanf("%d",&a);
	printf("enrer 2 side :- ");
	scanf("%d",&b);

	c = 180 - (a + b);
	printf("triangle : %d",c);
   getch();
}

