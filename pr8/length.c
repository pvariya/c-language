#include<stdio.h>
/*
Write a Program to find the length of a string using a Pointer.
*/
main()
{
	char str[20];
	printf("enter string :- ");
	scanf("%s",&str);
	
	char *ptr[20];
	ptr[0] = &str[0];
	int i,count=0;
	
	for(i=0; str[i]!=NULL; i++)
	{
		ptr[i] = &str[i];
	}
	
	for(i=0; str[i]!=NULL; i++)
	{
		count++;
	}
	printf("length :- %d",count);
}
