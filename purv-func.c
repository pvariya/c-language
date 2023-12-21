#include<stdio.h>
#include<string.h>

float getGrade()
{
	int math,guj,hindi,english,computer,account,stat,total;
	
	printf("math :- ");
	scanf("%d",&math);
	printf("gujrati :- ");
	scanf("%d",&guj);
	printf("hindi :- ");
	scanf("%d",&hindi);
	printf("english :- ");
	scanf("%d",&english);
	printf("computer  :- ");
	scanf("%d",&computer);
	printf("account :- ");
	scanf("%d",&account);
	printf("stat :- ");
	scanf("%d",&stat);
	
	total = math + guj + hindi + english + computer + account + stat;
	
	total = (float)total / 7;
	printf("------grad------\n");
	
	if(total >= 100 && total <= 91)
	{
		printf("your grad A\n");
	}
	else if(total >= 81 && total <= 90)
	{
		printf("your grad B\n");
	}
	else if(total >= 71 && total <= 60)
	{
		printf("your grad C\n");
	}
	else if(total >=33 && total <= 59)
	{
		printf("your grad D\n");
	}
	else 
	{
		printf("better luck next time....\n");
	}
	printf("-----percentage------");
	
	return total;
	
}

// scanf function 
int getInt()
{
	int n;
	scanf("%d",&n);
	return n;
}
float getFloat()
{
	int n;
	scanf("%f",&n);
	return n;
}
char getChar()
{
	int n;
	scanf("%[^\n]",&n);
	return n;
}


// 1D Array 
void arrayInput(int a[],int n)
{
	int i;
	printf("\n\n--------Array elimeent--------\n");
	for(i=0; i<n; i++)
	{
		printf("[%d] enter array elimnet :- ",i);
		a[i] = getInt();
	}
}

void arrayOutput(int a[],int n)
{
	int i;
	printf("\n\n--------Array Output--------\n");
	for(i=0; i<n; i++)
	{
		printf("[%d] :- %d \n",i,a[i]);
	}
}

// 1D sting 
void srtingInput(char n[])
{
	printf("\n\n--------string Output--------\n");	
	gets(n);
}
void srtingOutput(char n[])
{
	printf("\n\n--------Sting Output--------\n");
	puts(n);
}
// 2D Array
int getRow()
{
	int r;
	printf("enter row");
	r = getInt();
	return r;
}
int getcolumn()
{
	int c;
	printf("enter row");
	c = getInt();
	return c;
}
void ArrayInput(int r,int c,int p[r][c])
{
	int i,j;
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("enter array elimnet [%d][%d]:- ",r,c);
			p[i][j] = getInt();
		}
	}
}
// sum 
getnSum(int n)
{
	if(n>1)
	{
		return n + getnSum(n-1);
	}
	else
	{
		return 1;
	}
}
// factorial 
int getfactorial(int n)
{
	if(n>1)
	{
		return n * getfactorial(n-1);
	}
	else 
	{
		return 1;
	}
	
}






