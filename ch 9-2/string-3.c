#include<stdio.h>
#include<string.h>
main()
{
	char gma[20],pass[20],gma1[20],pass1[20];
	
	printf("enter your email :-");
	gets(gma);
	printf("enter your password :-");
	gets(pass);
	
	printf("-------------------------\n");	
	printf("Login Successful...\n");
	printf("---------------------------");
	here:
	printf("\nenter re your your gamil :- ");
	gets(gma1);
	printf("enter your password :-");
	gets(pass1);
	
	if((strcmp(gma1,gma)==0) && (strcmp(pass1,pass)==0))
	{
		printf("------------------------------\n");
		printf("your information is right....\n");
		printf("--------------------------------\n");
	}
	else
	{
		printf("\n-----------------------------\n");
		printf("your information is wrong...\n");
		printf("-----------------------------\n");
		goto here;
	}
}
