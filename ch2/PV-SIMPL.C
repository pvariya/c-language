#include<stdio.h>
#include<conio.h>
void main()
{
   float p,r,n;
   clrscr();
   printf("enter value of a money :- ");
   scanf("%f",&p);
   printf("enter rte of interts :- ");
   scanf("%f",&r);
   printf("enter number of time :- ");
   scanf("%f",&n);

   printf("value of a ractangle :- %.2f",(p*r*n)/100);
   getch();
}