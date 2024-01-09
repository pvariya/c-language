#include<stdio.h>
main()
{
	FILE *fp1 , *fp2;
	
	fp1 = fopen("odd.txt","a");
	fp2 = fopen("even.txt","a");
	
	int i;
	
	for(i=50;i<=70;i++)
	{
		if(i%2==0)
		{
			fprintf(fp1,"%d ",i);
		}
		else
		{
			fprintf(fp2,"%d ",i);
		}
	}
}
