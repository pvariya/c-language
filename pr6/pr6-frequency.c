#include<stdio.h>
#include<string.h>
main()
{
	char str[20];
	int i,j;
	printf("enter any string :- ");
	gets(str);
	
	int freq[strlen(str)];
	
	for(i=0 ;i<strlen(str);i++)
	{
		freq[i]=1;
		for(j=i+1; j<strlen(str); j++)
		{
			if(str[i] - str[j] == 0)
			{
				freq[i]++;
			}
		
		}
			printf("%c => %d\n",str[i],freq[i]);
	}	
	
	
}
