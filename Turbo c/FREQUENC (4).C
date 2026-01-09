#include<stdio.h>
#include<string.h>
#include<conio.h>
#define n 1
struct info
{
	int Math,Sci,Eco,marks;
	char name[100];
}student[n];
void main()
{
	int i,sum=0;
	int per;
	clrscr();
	printf("Full marks is 100\n");
	for(i=0;i<=n;i++)
	{
		printf("Enter student %d name\n",(i+1));
		gets(student[i].name);
		printf("Enter the marks in mathematics\n");
		scanf("%d",&student[i].Math);
		printf("Enter the marks in Science\n");
		scanf("%d",&student[i].Sci);
		printf("Enter the marks in Economics\n");
		scanf("%d",&student[i].Eco);
		printf("The total is:\n");
		student[i].marks= student[i].Math+student[i].Sci+student[i].Eco;
		printf("%d\n",student[i].marks);
		fflush(stdin);
	}
	printf(".....................The records.......................\n");
	for(i=0;i<=n;i++)
	{
		fflush(stdin);
		printf("Student 1\n",(i+1));
		printf("%s\n",student[i].name);
		printf("Marks in mathematics\n");
		printf("%d\n",student[i].Math);
		printf("Marks in Science\n");
		printf("%d\n",student[i].Sci);
		printf("Marks in Economics\n");
		printf("%d\n",student[i].Eco);
		printf("The total is:\n");
		student[i].marks= student[i].Math+student[i].Sci+student[i].Eco;
		printf("%d\n",student[i].marks);

	}
	printf("The avreage percentage of the class is\n");
	for(i=0;i<=n;i++)
	{
		sum=sum+student[i].marks;
	}
       //	printf("%d",sum);
	per=(int)((sum/(n+1))*100);
	printf("%2f",per);

	getch();
}







