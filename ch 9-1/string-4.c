#include<stdio.h>
#include<string.h>
main()
{
	char a[20], b[20];
	int i,spa=0;
	printf("enetr name :- ");
	gets(a);

	for(i=0; i<20; i++)
	{
		if(a[i] >= 65 && a[i] <= 90)
		{
			a[i] += 32;
		}
		else if(a[i] >= 97 && a[i] <= 122)
		{
			a[i] -= 32;
		}
	}
	puts(a);
	strcpy(b,a);
	puts(b);
} 
