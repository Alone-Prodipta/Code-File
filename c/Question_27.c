//Question 27
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	//clrscr();
	printf("Enter how many numbers\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
        for(j=1;j<=i;j++)
	    {
			printf("%d",j);
	    }
        printf("\n");	
	}
	getch();
}
		