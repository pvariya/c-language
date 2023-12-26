#include<stdio.h>
#include"string.h"
/*
Write a Program to find the length of the String by passing a string as an argument using UDF.For example,
Input:
Enter any string: development

Output:
Length is: 11
*/
void srtingInput(char n[])
{
	printf("\n\n--------string Input--------\n");	
	gets(n);
}
void srtingOutput(char n[])
{
	printf("\n\n--------Sting Output--------\n");
	puts(n);
}
char strleng(char n[])
{
	return strlen(n);
}
void main()
{
	char n[30];
	srtingInput(n);
	srtingOutput(n);
	int num = strleng(n);
	printf("\n---------length--------\n");
	printf("%d ",num);
}
