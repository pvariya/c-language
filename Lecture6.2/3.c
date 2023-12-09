#include<stdio.h>

main()
{
	printf("=================================================================\n");
	printf(" Program to print even numbers from 1 to N using a do-while loop.\n");
	printf("===============================================================\n\n");
 
 int n,i;

 printf("Enter any value :");
 scanf("%d",&n);
 do
 {
    if(i%2==0)
    {
      printf(" %d",i);
    }
    i++;
  }while(i<=n);

}
