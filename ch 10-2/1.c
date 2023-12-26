#include<stdio.h>
/*
Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
For example,
Input:
Enter array size: 5
Enter array elements:
a[0] = 6
a[1] = 4
a[2] = 1
a[3] = 5
a[4] = 2
*/
int arraySum(int a[],int n)
{
	int i,sum=0;
	for(i=0; i<n; i++)
	{
		sum += a[i];
	}
	return sum;
}
void arrayInput(int a[], int n)
{	
	int i;
	for(i=0; i<n; i++)
	{
		printf("enter [%d] :- ",i);
		scanf("%d",&a[i]);
	}
}
int main()
{
	int n,sum;
	printf("entre array size :- ");
	scanf("%d",&n);
	int a[n];
	arrayInput(a,n);
	sum = arraySum(a,n);
	printf("Sum :- %d ",sum);
}
