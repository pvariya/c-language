#include<stdio.h>
main()
{
	char str[20];
	int i,len=0;
	
		
	printf("enter any string :- ");
	scanf("%s",&str);
	for(i=0; str[i] != '\0'; i++)
	{
		len++;
	}
	char cpy[len],rev[len];
	
	for(i=0 ;i<len; i++)
	{
		cpy[i] = str[i];
	}
	for(i=0; i<len; i++)
	{
		rev[len-i-1]=str[i];
	}
	for(i=0;i<len;i++)
	{
		if(cpy[i]==rev[i])
		{
			printf("palindrome...");
			break;
		}
		else 
		{
			printf("not palindrome..");
			break;
		}
	}
}
