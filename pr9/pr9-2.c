#include<stdio.h>

struct student {
		int roll;
		char name[20];
		int chem_marks;
		int maths_marks;
		int phy_marks;
};
main()
{
	struct student s[5];
	
	int i;
	int total [5];
	float per[5];
	
	for(i=0;i<5;i++)
	{
		
		printf("student %d \n",i+1);
		printf("Roll no :- ");
		scanf("%d",&s[i].roll);
		fflush(stdin);
		printf("name :- ");
		scanf("%d",&s[i].name);
		fflush(stdin);
		printf("Physics :- ");
		scanf("%d",&s[i].phy_marks);
		printf("Mathematics :- ");
		scanf("%d",&s[i].maths_marks);
		printf("Chemistry  :- ");
		scanf("%d",&s[i].chem_marks);
	}
	for(i=0;i<5;i++)
	{
		total[i] = s[i].maths_marks + s[i].chem_marks + s[i].phy_marks;
		per[i] = total[i] / 3;
	}
	for(i=0;i<5;i++)
	{
		printf("\n\nstudent %d\n",i+1);
		printf("%s (%d)\n",s[i].name[i],s[i].roll);
		printf("Chemistry :- %d\n",s[i].chem_marks);
		printf("Physics :- %d\n",s[i].phy_marks);
		printf("Mathematics :- %d\n",s[i].maths_marks);
		printf("total :- %d\n",total[i]);
		printf("Percent :- %.2f\n",per[i]);		
	}
	
}
