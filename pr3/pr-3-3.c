#include<stdio.h>

main()
{
	int n,i,sum,a,b;
	
	printf("enter number :");
	scanf("%d",&n);
	a=n%10;
	while(n>10)
	{
		n=n/10;
	}
	b=n;
	sum=b+a;
	printf("your digit,first and last nunber sum = %d ",sum);
	
}
