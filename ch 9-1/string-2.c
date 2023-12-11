#include<stdio.h>
main()
{
	char a[20];
	int i,spa=0;
	printf("enetr name :- ");
	scanf("%[^\n]",&a);

	for(i=0; i<20; i++)
	{
		if(a[i] >= 65 && a[i] <= 90)
		{
			a[i] += 32;
		}
	}
	printf("Lowercase string :- %s",a);
}
