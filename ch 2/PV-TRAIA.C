#include<stdio.h>
#include<conio.h>
void main()
{
   float l,b;
   clrscr();
   printf("enter value of a length :- ");
   scanf("%f",&l);
   printf("enter value of a width :- ");
   scanf("%f",&b);

   printf("value of a traiangle :- %.2f",0.5*l*b);
   getch();
}