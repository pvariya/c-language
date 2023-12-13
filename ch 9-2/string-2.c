#include<stdio.h>
#include<string.h>
main()
{
	char str[20];
	int i;
	
	printf("enter name :- ");
	gets(str);
	
	if(str[0] >= 97 && str[i] <= 122)
	{
		str[0] -= 32;
	}
	puts(str);
}
