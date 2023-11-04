#include<stdio.h>
#include<conio.h>

main()
{


	float c,f;
   clrscr();
	printf("enter celcius :-  ");
	scanf("%f",&c);

	f = c * 9 / 5 + 32;

	printf("fahrenheit :- %.2f",f);
   getch();
}

