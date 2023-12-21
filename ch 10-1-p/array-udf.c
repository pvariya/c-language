#include<stdio.h>
#include"D:\purv\purv C\purv-func.c"
void main()
{
	int n;
	printf("enter array size :- ");
	n = getInt();
	
	int a[n];
	arrayInput(a,n);
	arrayOutput(a,n);
	
	
	fflush(stdin);
	
	char s[30];
	srtingInput(s);
	srtingOutput(s);
	
	fflush(stdin);	
	int r,c;
	r =  getRow();
	c = getcolumn();
	
	int p[r][c];
	ArrayInput(r,c,p);
}
