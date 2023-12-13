#include<stdio.h>
main()
{
	char a[20];
	int i,pas=0,len=0,up=0;
	
	printf("enter your name :-");
	scanf("%c",&a);
	
	for(i=0; i<20; i++)
	{
		if(a[i] >=  8)
		{
			pas++;
		}
		else if(up >= 65 && up <= 90)
		{
			up++;
		}
		
	}
	if(pas >= 8 && up>0)
	{
		printf("valide");
	}
	else
	{
		printf("invalide");
	}
	
	
}
