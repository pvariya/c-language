#include<stdio.h>
main()
{
	char pass[20];
	int i,sym=0,sml=0,dig=0,space=0;
	here:
	printf("enter your password :- ");
	gets(pass);
	
	for(i=0; pass[i] != '\0'; i++)
	{
		if((pass[i] >= 65 && pass[i] <= 90) || (pass[i] >= 97 && pass[i] <= 122))
		{
			sml++;
		}
		else if(pass[i] >= 48 && pass[i] <= 57)
		{
			dig++;
		}
		else if(pass[i] == 32)
		{
			space++;
		}
		else 
		{
			sym++;
		}
	}
	
	if(strlen(pass) > 5 && sml > 0 && dig >0 && space == 0 && sym > 0)	
	{
		printf("your password is stong....");
	}
	else 
	{
		printf("your password is not stong...\n");
		printf("re enter password !!\n");
		goto here;
	}
	
}
