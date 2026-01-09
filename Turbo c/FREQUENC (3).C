#include<stdio.h>
#include<conio.h>
#define n 1
struct info
{
	char name[100];
	int cls;
	char sec;
	int roll;
}student[n];
void main()
{
	int i;
	clrscr();
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("Enter details of student %d:\n",i+1);
		printf("Enter name\n");
		gets(student[i].name);
		printf("Enter class\n");
		scanf("%d",&student[i].cls);
		printf("Enter section\n");
		fflush(stdin);
		scanf("%c",&student[i].sec);
		printf("Enter the roll\n");
		scanf("%d",&student[i].roll);

	}
	printf(".................Details....................\n");
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("The details of student %d:\n",i+1);
		printf("Name:");
		puts(student[i].name);
		printf("Class:");
		printf("%d",student[i].cls);
		printf("\nSection:");
		fflush(stdin);
		printf("%c",student[i].sec);
		printf("\nRoll:");
		printf("%d",student[i].roll);

	}
	getch();
}

