#include<stdio.h>

void sum(int a,int b)
{

	printf("enter a :- ");
	scanf("%d",&a);
	printf("enter a :- ");
	scanf("%d",&b);
	printf("\n--------------------------------------\n");
	printf("Addition of %d and %d is %d\n",a,b,a+b);
	printf("\n--------------------------------------\n");	
}

void sub(int a,int b)
{
	printf("enter a :- ");
	scanf("%d",&a);
	printf("enter a :- ");
	scanf("%d",&b);
	printf("\n------------------------------------------\n");
	printf("subtraction of %d and %d is %d\n",a,b,a-b);	
	printf("\n------------------------------------------\n");
}


void mul(int a,int b)
{
	printf("enter a :- ");
	scanf("%d",&a);
	printf("enter a :- ");
	scanf("%d",&b);
	printf("\n------------------------------------------\n");
	printf("multiplication of %d and %d is %d\n",a,b,a*b);	
	printf("\n------------------------------------------\n");
}


void div(int a,int b)
{
	printf("enter a :- ");
	scanf("%d",&a);
	printf("enter a :- ");
	scanf("%d",&b);
	printf("\n--------------------------------------\n");
	printf("Division  of %d and %d is %d\n",a,b,a/b);
	printf("\n--------------------------------------\n");
	
}

void mod(int a,int b)
{
	printf("enter a :- ");
	scanf("%d",&a);
	printf("enter a :- ");
	scanf("%d",&b);
	printf("\n---------------------\n");
	printf("modulo  of %d and %d is %d",a,b,a%b);
	printf("\n---------------------\n");
	
}
void main()
{
	int choice,a,b;
	do
	{
	
		printf("1) +\n");
		printf("2) -\n");
		printf("3) *\n");
		printf("4) /\n");
		printf("5) %\n");
		printf("0) exit\n");
		printf("enter your choice :- ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				sum(a,b);
				break;
			case 2:
				sum(a,b);
				break;
			case 3:
				mul(a,b);
				break;
			case 4:
				div(a,b);
				break;
			case 5:
				mod(a,b);
				break;
			case 6:
				printf("exit ");
		}
	}while(choice != 0);
}

