#include<stdio.h>
main()
{
	int a,b,choice;
	do
	{
			
		printf("1) +\n");
		printf("2) -\n");
		printf("3) *\n");
		printf("4) /\n");
		printf("0) EXIT\n");
		printf("enter yoru choice :- ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("enter a number :- ");
				scanf("%d",&a);
				printf("enter b number :- ");
				scanf("%d",&b);
				
				printf("sum :- %d\n",a+b);	
				break;
				
			case 2:
				printf("enter a number :- ");
				scanf("%d",&a);
				printf("enter b number :- ");
				scanf("%d",&b);
				
				printf("sub :- %d\n",a-b);
				break;
				
			case 3:
				printf("enter a number :- ");
				scanf("%d",&a);
				printf("enter b number :- ");
				scanf("%d",&b);
				
				printf("mul :- %d\n",a*b);
				break;
			
			case 4:
				printf("enter a number :- ");
				scanf("%d",&a);
				printf("enter b number :- ");
				scanf("%d",&b);
				
				printf("div :- %d\n",a/b);
				break;
			
			case 0:
					break;
			default: 
					printf("invalid number !!\n");
		}
		
	}while(choice != 0);
	
	printf("enter any key to exit :)");
}
