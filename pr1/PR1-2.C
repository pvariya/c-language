#include<stdio.h>
#include<conio.h>

void main()
{
   float  BS,HRA,DA,TA,GS;
   clrscr();
   printf("enter base salary :-  ");
   scanf("%f",&BS);

  ;
   HRA = BS * 0.10;
   printf("HRA  %f\n",HRA);


   DA = BS * 0.05;
   printf("DA  %F\n",DA);


   TA = BS * 0.08;
   printf("TA  %f\n",TA);
   
   GS += BS + HRA + DA + TA;
   printf("base salary :- %.2f",GS);

getch();
   
}
